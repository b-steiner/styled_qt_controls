#pragma once

#include "base_editor_group.q.hpp"
#include "item_editor_item.q.hpp"
#include "../styled_controls/styled_collapse_widget.q.hpp"

BEGIN_BDL_SQTC

class BDL_SQTC_EXPORT item_editor_group : public base_editor_group
{
	Q_OBJECT

	PROPERTY0(QString, title);
	PROPERTY0(bool, show_enable_button);
	PROPERTY0(bool, is_expanded);
	PROPERTY0(QList<base_item_editor_item*>, items);
	PROPERTY0(styled_collapse_widget*, widget);
	PROPERTY0(QMenu*, additional_options);

public:
	item_editor_group(const QString& title, bool show_enable_button = false, QMenu* additional_options = nullptr);
	virtual ~item_editor_group();

	virtual QWidget* widget();

	void add_item(base_item_editor_item* item);
	void remove_item(base_item_editor_item* item);
	void remove_item(int idx);

private:
	void items_changed();

private slots:
	void widget_deleted();
};

END_BDL_SQTC