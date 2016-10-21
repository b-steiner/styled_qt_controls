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
#include "icon_loader.hpp"

#include <unordered_map>
#include <QtWinExtras\QtWinExtras>

#include <Windows.h>
#include <CommCtrl.h>
#include <shellapi.h>
#include <shlobj.h>
#include <shlguid.h>
#include <commoncontrols.h>

using namespace bdl::styled_qt_controls::util;

QIcon icon_loader::load_fileicon(const QFileInfo& info, QList<icon_size_type> sizes)
{
	QIcon icon;

	SHFILEINFOW sfi = { 0 };
	wchar_t buffer[256];

	info.filePath().toWCharArray(buffer);
	buffer[info.filePath().length()] = '\0';
	SHGetFileInfo(buffer, FILE_ATTRIBUTE_NORMAL, &sfi, sizeof(sfi), SHGFI_USEFILEATTRIBUTES | SHGFI_SYSICONINDEX);

	HIMAGELIST* imageList;

	std::unordered_map<icon_size_type, int> iconSizes = { { icon_size_type::size16, SHIL_SMALL }, { icon_size_type::size32, SHIL_LARGE },
	{ icon_size_type::size48, SHIL_EXTRALARGE},{ icon_size_type::size128, SHIL_JUMBO } };

	for (auto iconSize : sizes)
	{
		HRESULT hResult = SHGetImageList(iconSizes[iconSize], IID_IImageList, (void**)&imageList);

		if (hResult == S_OK)
		{
			HICON hIcon;
			hResult = ((IImageList*)imageList)->GetIcon(sfi.iIcon, ILD_TRANSPARENT, &hIcon);

			if (hResult == S_OK)
			{
				QPixmap pixmap = QtWin::fromHICON(hIcon);
				int w = pixmap.width();
				int h = pixmap.height();
				icon.addPixmap(pixmap, QIcon::Selected);
			}
		}
	}

	return icon;
}

HICON icon_loader::taskbar_icon(const QIcon& icon)
{
	int s = GetSystemMetrics(SM_CXICON);
	return QIcon_to_HICON(icon, s);
}

HICON icon_loader::QIcon_to_HICON(const QIcon& icon, unsigned int size, QIcon::Mode mode, QIcon::State state)
{
	auto pix = icon.pixmap(size, mode, state);
	auto s = pix.width();
	return QtWin::toHICON(pix);
}

QPixmap icon_loader::default_os_icon(default_icon_type icon, int size)
{
	LPCWSTR name;
	switch (icon)
	{
	case default_icon_type::error:
		name = MAKEINTRESOURCE(OIC_ERROR);
		break;
	case default_icon_type::warning:
		name = MAKEINTRESOURCE(OIC_WARNING);
		break;
	case default_icon_type::info:
		name = MAKEINTRESOURCE(OIC_INFORMATION);
		break;
	case default_icon_type::question:
		name = MAKEINTRESOURCE(OIC_QUES);
		break;
	}

	auto img = LoadImage(NULL, name, IMAGE_ICON, size, size, LR_SHARED);
	auto pix = QtWin::fromHICON((HICON)img);
	return pix;
}