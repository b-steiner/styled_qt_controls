#pragma once

#include "../styled_qt_controls.hpp"
#include "../styled_controls/styled_collapse_widget.q.hpp"
#include "hs_frame.q.hpp"
#include "l_frame.q.hpp"
#include "../styled_controls/numeric_line_edit.q.hpp"
#include "../styled_controls/styled_list_view.q.hpp"
#include "color_list_item_model.q.hpp"


BEGIN_BDL_SQTC

		/*! \brief Widget for selecting colors
		 *
		 * This widgets allows the user to select a color. It supports visual choice through a hsl color picker 
		 * as well as selecting the color through text input.
		 *
		 * \author bdl
		 */
		class BDL_SQTC_EXPORT styled_color_picker : public styled_collapse_widget
		{
			Q_OBJECT;

			//! Stores the color
			PROPERTY2(QColor, color, GET_CONST_REF_PT, SET_PT); 
			
			PROPERTY0(styled_frame*, color_display_frame);
			PROPERTY0(hs_frame*, hs_picker);
			PROPERTY0(l_frame*, l_picker);
			PROPERTY0(QButtonGroup*, color_mode_group);
			PROPERTY0(numeric_line_edit*, channel1_lineedit);
			PROPERTY0(numeric_line_edit*, channel2_lineedit);
			PROPERTY0(numeric_line_edit*, channel3_lineedit);
			PROPERTY0(QLineEdit*, hex_lineedit);
			PROPERTY0(QLabel*, channel1_label);
			PROPERTY0(QLabel*, channel2_label);
			PROPERTY0(QLabel*, channel3_label);
			PROPERTY0(QPushButton*, connect_button);
			PROPERTY0(QWidget*, pick_widget);
			PROPERTY0(QCursor, pick_restore_cursor);
			PROPERTY0(QPushButton*, pick_button);
			PROPERTY0(bool, record_color);
			PROPERTY0(styled_list_view*, recent_list);

			static std::unique_ptr<color_list_item_model> m_recent_model;

		public:
			/*! \brief Initializes a new instance of the styled_color_picker class
			 *
			 * \param title The title of the collapsable widget
			 */
			styled_color_picker(const QString& title, QWidget* pick_widget = nullptr);
			/*! \brief Releases all data associated with an instance of the styled_color_picker class
			*/
			~styled_color_picker();

			/*! \brief Gets or sets the checked state of the binding button
			 *
			 * \returns True when the button is checked, False otherwise
			 */
			bool is_bound() const;
			/*! \brief Gets or sets the checked state of the binding button
			*
			* \param value Set to True when the button should be checked, False otherwise
			*/
			void is_bound(bool value);

		private slots:
			void picker_color_changed(const QColor& color);
			void mode_buttonToggled(int id, bool checked);

			void channel_textEdited(const QString &text);
			void binding_button_toggled(bool value);
			void pick_button_toggled(bool value);

			void add_recent_button_clicked(bool value);
			void remove_recent_button_clicked(bool value);
			void recent_list_double_clicked(const QModelIndex& index);

			bool eventFilter(QObject *obj, QEvent *event);

		signals:
			/*! \brief Signals when the color is changed
			 *
			 * \param color The new color
			 */
			void color_changed(const QColor& color);
			/*! \brief Signals when the binding button was toggled
			*
			* \param value The state of the button
			*/
			void binding_changed(bool value);

		private:
			void color_changed_internal(const QColor& color);

			QColor color_from_pos(QPoint point);
		};

END_BDL_SQTC