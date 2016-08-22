#include <bdl.styled_qt_controls\styled_qt_controls.hpp>
#include "icon_loader.hpp"

#include <Windows.h>
#include <CommCtrl.h>
#include <shellapi.h>
#include <shlobj.h>
#include <shlguid.h>
#include <commoncontrols.h>

using namespace bdl::styled_qt_controls::util;

QIcon icon_loader::load_fileicon(const QFileInfo& info)
{
	QIcon icon;

	SHFILEINFOW sfi = { 0 };
	wchar_t buffer[256];

	info.filePath().toWCharArray(buffer);
	buffer[info.filePath().length()] = '\0';
	SHGetFileInfo(buffer, FILE_ATTRIBUTE_NORMAL, &sfi, sizeof(sfi), SHGFI_USEFILEATTRIBUTES | SHGFI_SYSICONINDEX);

	HIMAGELIST* imageList;

	int iconSizes[] = { SHIL_SMALL, SHIL_LARGE, SHIL_EXTRALARGE, SHIL_JUMBO };

	for (int iconSize : iconSizes)
	{
		HRESULT hResult = SHGetImageList(iconSize, IID_IImageList, (void**)&imageList);

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