#pragma once

#include <bdl.styled_qt_controls/styled_window/styled_window.q.hpp>

namespace bdl
{
	namespace sample_application
	{
		class main_window : public styled_qt_controls::styled_window
		{
			Q_OBJECT;

		public:
			main_window();
			virtual ~main_window();

		private:
			QStandardItemModel* m_model;
			void load_fs_model();
			QStandardItem* load_fs_item(QFileInfo file, int depth = 0);
		};
	}
}