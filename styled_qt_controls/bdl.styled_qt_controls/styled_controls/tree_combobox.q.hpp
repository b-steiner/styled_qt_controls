#pragma once

#include "../styled_qt_controls.hpp"
#include "styled_pushbutton.q.hpp"
#include "styled_tree_view.q.hpp"

BEGIN_BDL_SQTC

	/*! A combobox that has a treeview in the menu area
		*
		* \author bdl
		*/
	class BDL_SQTC_EXPORT tree_combobox : public QFrame
	{
		Q_OBJECT;

		//! Stores the selected index
		PROPERTY2(QModelIndex, selected_index, GET_CONST_REF_PT, SET_PT);
		//! Stores the tree_view
		PROPERTY1(styled_tree_view*, tree_view, protected: GET);

		PROPERTY0(QLabel*, selected_text_label);
		PROPERTY0(QLabel*, selected_icon_label);
		PROPERTY0(QMenu*, menu);
		PROPERTY0(styled_pushbutton*, menu_button);

	public:
		/*! \brief Initializes a new instance of the tree_combobox class
			*
			* \param parent The parent widget. See QFrame
			*/
		tree_combobox(QWidget* parent = nullptr);
		/*! \brief Releases all data associated with an instance of the clearable_line_edit class
			*/
		virtual ~tree_combobox();

		//! See QFrame
		bool eventFilter(QObject * obj, QEvent *event);

		/*! \brief Gets or sets the treeview model
			*
			* \param value The new treeview model
			*/
		void model(QAbstractItemModel* value);
		/*! \brief Gets or sets the treeview model
		*
		* \returns The treeview model
		*/
		QAbstractItemModel* model() const;

		void setExpanded(const QModelIndex& index, bool expand);

	protected:
		//! See QFrame
		virtual void paintEvent(QPaintEvent *pe);
		//! See QFrame
		virtual void mousePressEvent(QMouseEvent* event);

	signals:
		/*! \brief Is emitted when the selected index has changed
			*
			* \param index The new index
			*/
		void selected_index_changed(const QModelIndex& index);

	private slots:
		void tree_doubleclicked(const QModelIndex & index);
	};

END_BDL_SQTC