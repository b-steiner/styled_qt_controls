#include <bdl.styled_qt_controls\styled_qt_controls.hpp>
#include "styled_dock_splitter.q.hpp"

#include "styled_dock_widget.q.hpp"
#include "../util/style_loader.hpp"
#include "../util/settings/settings_group.hpp"
#include "../styled_window/styled_window.q.hpp"

using namespace bdl::styled_qt_controls;
using namespace bdl::styled_qt_controls::util;

styled_dock_splitter::styled_dock_splitter(Qt::Orientation orientation, bool close_on_empty, QWidget* parent) : QSplitter(orientation, parent), m_close_on_empty(close_on_empty)
{ 
	style_loader loader(":/styled_dock_widget/styled_dock_widget.qss");
	this->setStyleSheet(loader.style_string());
}
styled_dock_splitter::~styled_dock_splitter() { }

void styled_dock_splitter::paintEvent(QPaintEvent* pe)
{
	QStyleOption o;
	o.initFrom(this);
	QPainter p(this);
	style()->drawPrimitive(QStyle::PE_Widget, &o, &p, this);
}
void styled_dock_splitter::childEvent(QChildEvent* _child)
{
	QSplitter::childEvent(_child);

	if (_child->removed() && m_close_on_empty)
	{
		if (count() == 0)
		{
			QObject* w = this;
			while (w->parent() != nullptr)
				w = w->parent();

			auto window = styled_window::widget_to_window((QWidget*)w);
			window->close();
		}
		else if (count() == 1 && ISQTYPE(parent(), styled_dock_splitter))
		{
			styled_dock_splitter* psplitter = (styled_dock_splitter*)parent();
			int idx = psplitter->indexOf(this);
			QWidget* child = this->widget(0);
			psplitter->insertWidget(idx, child);

			this->setParent(0);
		}
	}
}

settings_group* styled_dock_splitter::save_settings()
{
	settings_group* sgroup = new settings_group("styled_dock_splitter");
	sgroup->values()["type"] = "styled_dock_splitter";
	if (this->orientation() == Qt::Horizontal)
		sgroup->values()["orientation"] = "Horizontal";
	else
		sgroup->values()["orientation"] = "Vertical";

	if (m_close_on_empty)
		sgroup->values()["close_on_empty"] = "True";
	else
		sgroup->values()["close_on_empty"] = "False";

	QString size_str;
	for (auto s : sizes())
		size_str += QString::number(s) + ";";
	sgroup->values()["sizes"] = size_str;

	for (int i = 0; i < this->count(); i++)
	{
		auto ch_i = widget(i);
		settings_group* ch_group = nullptr;
		
		if (ISQTYPE(ch_i, styled_dock_splitter))
		{
			ch_group = ((styled_dock_splitter*)ch_i)->save_settings();
		}
		else if (ISQTYPE(ch_i, styled_dock_widget))
		{
			ch_group = ((styled_dock_widget*)ch_i)->save_settings();
		}
		else
			qWarning() << "Unsupported type in styled_dock_splitter. Settings are not safed";

		if (ch_group != nullptr)
		{
			ch_group->key("item[" + QString::number(i) + "]");
			ch_group->values()["idx"] = QString::number(i);
			sgroup->add_group(ch_group);
		}
	}

	return sgroup;
}
void styled_dock_splitter::load_settings(settings_group* group)
{
	if (group->values()["type"] != "styled_dock_splitter")
	{
		qWarning() << "Wrong settings_group type";
		return;
	}

	QHash<int, QWidget*> widgets;

	for (auto grp : group->groups().values())
	{
		if (grp->values()["type"] == "styled_dock_splitter")
		{
			Qt::Orientation orientation = Qt::Vertical;
			if (grp->values()["orientation"] == "Horizontal")
				orientation = Qt::Horizontal;

			styled_dock_splitter* splitter = new styled_dock_splitter(orientation, grp->values()["close_on_empty"] == "True");
			widgets.insert(grp->values()["idx"].toInt(), splitter);
			splitter->load_settings(grp);
		}
		else if (grp->values()["type"] == "styled_dock_widget")
		{
			styled_dock_orientation orientation = styled_dock_orientation::top;
			if (grp->values()["orientation"] == "bottom")
				orientation = styled_dock_orientation::bottom;

			styled_dock_widget* widget = new styled_dock_widget(orientation, grp->values()["tag"]);
			widgets.insert(grp->values()["idx"].toInt(), widget);
			widget->load_settings(grp);
		}
	}

	int added = 0;
	int idx = 0;
	while (added < widgets.count())
	{
		if (widgets.contains(idx))
		{
			this->addWidget(widgets[idx]);
			added++;
		}

		idx++;
	}

	QList<int> sizes;
	for (auto& s : group->values()["sizes"].split(";"))
		sizes << s.toInt();

	this->setSizes(sizes);
}