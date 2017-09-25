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

#pragma once

#include "..\..\styled_qt_controls.hpp"

BEGIN_BDL_SQTC

namespace util
{
	/*! \brief Checks a directory hierarchy for modifications
		*
		* \author bdl
		*/
	class BDL_SQTC_EXPORT file_system_watcher : public QThread
	{
		Q_OBJECT;

		PROPERTY0(bool, blender_save_in_progress);
		PROPERTY0(QString, root_directory);

		PROPERTY0(QSet<QString>, exclude_files);
		PROPERTY0(QMutex, exclude_file_mutex);

	public:
		/*! \brief Initializes a new instance of the file_system_watcher class
			*
			* \param root_directory The base directory for watching
			*/
		file_system_watcher(QString root_directory);
		/*! \brief Releases all data associated with an instance of the file_system_watcher class
			*/
		virtual ~file_system_watcher();

		void add_excluded_file(const QString& file);
		void remove_excluded_file(const QString& file);

	protected:
		/*! Run method of this thread
			*/
		void run();

	signals:
		/*! \brief Is emitted whenever a file is added to the directory tree
			*
			* \param path Path of the created file
			*/
		void added(const QString& path);
		/*! \brief Is emitted whenever a file name has changed. This is also emitted for move operations
			*
			* \param old_path Path of the file before the rename has happened
			* \param new_path Path of the file after the rename has happened
			*/
		void renamed(const QString& old_path, const QString& new_path);
		/*! \brief Is emitted whenever a file is deleted
			*
			* \param path Path of the deleted file
			*/
		void deleted(const QString& path);
		/*! \brief Is emitted whenever the content of a file has changed
			*
			* \param path Path of the modified file
			*/
		void modified(const QString& path);
	};
}

END_BDL_SQTC