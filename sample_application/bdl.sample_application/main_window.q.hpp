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