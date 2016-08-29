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

#include "../styled_qt_controls.hpp"
#include "styled_path_widget_item.q.hpp"
#include "styled_path_widget_layout.q.hpp"

BEGIN_BDL_SQTC


/*! \brief Widget for displaying pathes that allows for navigation through them
	*
	* \author bdl
	*
	* This widget provides several ways of changing a path, including clicking on parent objects, menues for other children of parent folders and a back-forward mechanism.
	*/
class BDL_SQTC_EXPORT styled_path_widget : public QWidget
{
	Q_OBJECT;

	PROPERTY0(styled_path_widget_layout*, layout);
	PROPERTY0(QPushButton*, overflow_button);
	typedef QHash<styled_path_widget_item*, QWidget*> item_widget_hashtable;
	PROPERTY0(item_widget_hashtable, item_to_widget);
	PROPERTY0(bool, is_undo_redo);
	PROPERTY0(QUndoStack, undo_stack);

	//!Stores the currently displayed items
	PROPERTY2(QList<styled_path_widget_item*>, items, GET_CONST_REF, SET_PT);

public:
	/*! \brief Initializes a new instance of the styled_path_widget class
		*/
	styled_path_widget();
	/*! \brief Releases all data associated with an instance of the styled_path_widget class
		*/
	virtual ~styled_path_widget();

signals:
	/*! \brief Emitted when the user selects another folder through the ui
		*
		* \param item The newly selected item
		*/
	void item_selected(bdl::styled_qt_controls::styled_path_widget_item* item);

protected:
	//! See QWidget
	void paintEvent(QPaintEvent *pe);

private slots:
	void layout_overflow_changed(bool overflow);
	void text_button_clicked(bool checked);
	void action_triggered(bool checked);

	void forward_button_clicked(bool checked);
	void back_button_clicked(bool checked);

	void stack_canredochanged(bool can_redo);
	void stack_canundochanged(bool can_undo);

private:
	void update_ui();

	class path_undo_command : public QUndoCommand
	{
	public:
		path_undo_command(styled_path_widget_item* old_item, styled_path_widget_item* new_item, styled_path_widget* widget);
		~path_undo_command();

		virtual void redo();
		virtual void undo();

	private:
		styled_path_widget_item* m_old_item;
		styled_path_widget_item* m_new_item;
		styled_path_widget* m_widget;
	};
};

END_BDL_SQTC