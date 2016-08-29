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

BEGIN_BDL_SQTC

/*! \brief A QTreeView that supports full line selection display. It can also persist expansion states and restore them
	*
	* \author bdl
	*/
class BDL_SQTC_EXPORT styled_tree_view : public QTreeView
{
	Q_OBJECT;

	PROPERTY0(bool, update_expansion);
	PROPERTY0(bool, selection_changed);
	PROPERTY0(QColor, selected_background);
	PROPERTY0(QColor, selected_background_nofocus);
	PROPERTY0(QColor, selected_border);
	PROPERTY0(QColor, selected_border_nofocus);
	PROPERTY0(QModelIndex, down_index);

	//! Color for selected rows
	Q_PROPERTY(QColor selected_background MEMBER m_selected_background);
	//! Color for selected rows when the QTreeView is out of focus
	Q_PROPERTY(QColor selected_background_nofocus MEMBER m_selected_background_nofocus);
	//! Color for selection borders
	Q_PROPERTY(QColor selected_border MEMBER m_selected_border);
	//! Color for selection borders when the QTreeView is out of focus
	Q_PROPERTY(QColor selected_border_nofocus MEMBER m_selected_border_nofocus);

public:
	//! A enumeration for additional roles used by the treeview
	enum styled_tree_view_role : int
	{
		//! Role for storing expansion states
		is_expanded = Qt::UserRole + 1,
		//! Role for storing whether or not items can be collapsed
		always_expanded = Qt::UserRole + 2,
		icon_list = Qt::UserRole + 3,
		//! Use this value in models to prevent them of overriding treeview roles
		max_value = Qt::UserRole + 4
	};

	/*! \brief Initializes a new instance of the styled_tree_view class
		*
		* \param parent The widgets parent
		*/
	styled_tree_view(QWidget* parent = nullptr);
	/*! \brief Releases all data associated with an instance of the styled_tree_view class
		*/
	virtual ~styled_tree_view();

	/*! \brief Restores the last saved expansion state
		*/
	void restore_expansion();
	/*! \brief Enables or disables updates to the stored expansion state
		*/
	void update_expansion(bool value);

	/*! \brief Sets the selection model for this treeview
		*/
	virtual void setSelectionModel(QItemSelectionModel* selection_model);

protected:
	//! See QTreeView
	virtual void drawRow(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) const;
	//! See QTreeView
	virtual void mousePressEvent(QMouseEvent* _event);
	//! See QTreeView
	virtual void mouseReleaseEvent(QMouseEvent* _event);
	//! See QTreeView
	virtual void showEvent(QShowEvent* event);
			
signals:
	/*! \brief Emitted when the currently selected index is changed
		*
		* \param index The new selected index
		*/
	void current_changed(const QModelIndex& index);

private slots:
	void this_expanded(const QModelIndex& index);
	void this_collapsed(const QModelIndex& index);
	void selectionmodel_currentchanged(const QModelIndex& current, const QModelIndex& previous);

private:
	void restore_expansion(const QModelIndex& index);
};

END_BDL_SQTC