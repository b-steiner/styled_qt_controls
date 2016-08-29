#pragma once

#include <bdl.styled_qt_controls\styled_qt_controls.hpp>

namespace bdl
{
	namespace sample_application
	{
		/*! \brief A window containing all controls from the styled_qt_controls library
		 *
		 * \author bdl
		 */
		class main_window : public styled_qt_controls::styled_window
		{
			Q_OBJECT;

			PROPERTY0(QStandardItemModel*, model);

		public:
			/*! \brief Initializes a new instance of the main_window class
			 */
			main_window();
			/*! \brief Releases all data associated with an instance of the main_window class
			 */
			virtual ~main_window();

		private:			
			void load_fs_model();
			QStandardItem* load_fs_item(QFileInfo file, int depth = 0);
			styled_qt_controls::styled_list_view* m_list_view;
			styled_qt_controls::styled_collapse_widget* m_scw;

			QWidget* create_simple_control_widget();
			QWidget* create_item_control_widget();
			QWidget* create_item_editor_widget();
			QWidget* create_combined_control_widget();

		private slots:
			void size_btn_1_clicked(bool checked);
			void size_btn_2_clicked(bool checked);
			void size_btn_3_clicked(bool checked);
			void size_btn_4_clicked(bool checked);
			void state_btn_1_clicked(bool checked);
			void state_btn_2_clicked(bool checked);
			void state_btn_3_clicked(bool checked);
			void state_btn_4_clicked(bool checked);

			void exit_action_triggered(bool checked);
			void about_action_triggered(bool checked);

			void info_msg_action_triggered(bool checked);
			void warning_msg_action_triggered(bool checked);
			void critical_msg_action_triggered(bool checked);
			void question_msg_action_triggered(bool checked);
			void custom_msg_action_triggered(bool checked);
		};
	}
}