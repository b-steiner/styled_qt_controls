#pragma once

#include <bdl.styled_qt_controls/styled_window/styled_window.q.hpp>
#include <bdl.styled_qt_controls/styled_controls/styled_list_view.q.hpp>
#include <bdl.styled_qt_controls/styled_controls/styled_collapse_widget.q.hpp>

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
			styled_qt_controls::styled_list_view* m_list_view;
			styled_qt_controls::styled_collapse_widget* m_scw;

		private slots:
			void size_btn_1_clicked(bool checked);
			void size_btn_2_clicked(bool checked);
			void size_btn_3_clicked(bool checked);
			void size_btn_4_clicked(bool checked);
			void state_btn_1_clicked(bool checked);
			void state_btn_2_clicked(bool checked);
			void state_btn_3_clicked(bool checked);
			void state_btn_4_clicked(bool checked);

			QWidget* create_simple_control_widget();
			QWidget* create_item_control_widget();
			QWidget* create_item_editor_widget();
			QWidget* create_combined_control_widget();
		};
	}
}