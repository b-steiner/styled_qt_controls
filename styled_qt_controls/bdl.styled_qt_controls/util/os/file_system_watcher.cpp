/**************************************************************************************
**
** Copyright (C) 2016 Bernhard Steiner
**
** This file is part of the styled_qt_controls library
**
** This product is licensed under the GNU General Public License version 3.
** The license is as published by the Free Software Foundation published at
** https://www.gnu.org/licenses/gpl-3.0.html.
**
** Alternatively, this product is licensed under the GNU Lesser General Public
** License version 3 for non-commercial use. The license is as published by the
** Free Software Foundation published at https://www.gnu.org/licenses/lgpl-3.0.html.
**
** Feel free to contact us if you have any questions about licensing or want
** to use the library in a commercial closed source product.
**
**************************************************************************************/

#include <bdl.styled_qt_controls\styled_qt_controls.hpp>
#include "file_system_watcher.q.hpp"

using namespace bdl::styled_qt_controls::util;

file_system_watcher::file_system_watcher(QString root_directory) : m_root_directory(root_directory), m_blender_save_in_progress(false) { }
file_system_watcher::~file_system_watcher() { }

void file_system_watcher::run()
{
	wchar_t nameBuffer[256];
	int length = m_root_directory.toWCharArray(nameBuffer);
	nameBuffer[length] = '\0';
	HANDLE folder = CreateFile(nameBuffer,
		FILE_LIST_DIRECTORY,
		FILE_SHARE_READ | FILE_SHARE_WRITE | FILE_SHARE_DELETE,
		NULL,
		OPEN_EXISTING,
		FILE_FLAG_BACKUP_SEMANTICS,
		NULL);

	if (folder == INVALID_HANDLE_VALUE)
	{
		return;
	}

	QString oldRenamePath;

	FILE_NOTIFY_INFORMATION* fileInfoBuffer = new FILE_NOTIFY_INFORMATION[32];

	while (true)
	{

		DWORD lpBytesReturned;

		BOOL result = ReadDirectoryChangesW(folder, fileInfoBuffer, sizeof(FILE_NOTIFY_INFORMATION) * 32, TRUE,
			FILE_NOTIFY_CHANGE_FILE_NAME | FILE_NOTIFY_CHANGE_DIR_NAME | FILE_NOTIFY_CHANGE_LAST_WRITE,
			&lpBytesReturned,
			NULL, NULL);

		if (result == TRUE && lpBytesReturned > 0)
		{
			FILE_NOTIFY_INFORMATION* currentInfo = fileInfoBuffer;

			while (currentInfo != nullptr)
			{
				QString relPath = QString::fromWCharArray(currentInfo->FileName, currentInfo->FileNameLength / sizeof(WCHAR));
				QString fullPath = m_root_directory + "\\" + relPath;
				QFileInfo fullPathInfo(fullPath);
				fullPath = fullPathInfo.absoluteFilePath();

				switch (currentInfo->Action)
				{
				case FILE_ACTION_ADDED:
					if (fullPathInfo.suffix() == "blend@") //Supress add when blender rename in progress
						m_blender_save_in_progress = true;
					else
						emit added(fullPath);
					break;
				case FILE_ACTION_REMOVED:
					if (!m_blender_save_in_progress)
						emit deleted(fullPath);
					break;
				case FILE_ACTION_MODIFIED:
				{
					if (!m_blender_save_in_progress)
					{
						//Only for files -> check what we have
						wchar_t pathBuffer[512];
						int length = fullPath.toWCharArray(pathBuffer);
						pathBuffer[length] = '\0';
						DWORD attributes = GetFileAttributes(pathBuffer);
						if ((attributes & FILE_ATTRIBUTE_DIRECTORY) == 0)
						{
							emit modified(fullPath);
						}
					}
					break;
				}
				case FILE_ACTION_RENAMED_OLD_NAME:
					oldRenamePath = fullPath;
					break;
				case FILE_ACTION_RENAMED_NEW_NAME:
					if (!m_blender_save_in_progress)
						emit renamed(oldRenamePath, fullPath);
					else
					{
						QFileInfo old(oldRenamePath);
						if (old.suffix() == "blend@" && fullPathInfo.suffix() == "blend")
						{
							m_blender_save_in_progress = false;
							emit modified(fullPath);
						}
					}
					break;
				}

				if (currentInfo->NextEntryOffset != 0)
					currentInfo = (FILE_NOTIFY_INFORMATION*)((char*)currentInfo + currentInfo->NextEntryOffset);
				else
					currentInfo = nullptr;
			}
		}
	}

	delete[] fileInfoBuffer;
}