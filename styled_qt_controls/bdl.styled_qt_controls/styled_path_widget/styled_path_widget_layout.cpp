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

#include <bdl.styled_qt_controls/styled_qt_controls.hpp>
#include "styled_path_widget_layout.q.hpp"

using namespace bdl::styled_qt_controls;

styled_path_widget_layout::styled_path_widget_layout() : QLayout()
{ }
styled_path_widget_layout::~styled_path_widget_layout()
{
	QLayoutItem* item;
	while ((item = takeAt(0)))
	{
		item->widget()->setParent(0);
	}
}


void styled_path_widget_layout::addItem(QLayoutItem* _item)
{
	m_items.append(_item);
	setGeometry(geometry());
}
QLayoutItem* styled_path_widget_layout::itemAt(int _idx) const
{
	return m_items.value(_idx);
}
QLayoutItem* styled_path_widget_layout::takeAt(int _idx)
{
	if (_idx >= 0 && _idx < m_items.size())
	{
		auto item = m_items.takeAt(_idx);
		setGeometry(geometry());
		return item;
	}


	return  nullptr;
}
int styled_path_widget_layout::count() const
{
	return m_items.count();
}

void styled_path_widget_layout::setGeometry(const QRect& _rect)
{
	auto thisSize = sizeHint();

	QLayout::setGeometry(_rect);
	bool overflow = false;
	m_visible_items.clear();


	//Check what is visible
	int w = _rect.right();
	bool first = true;

	auto it = m_items.end();
	while (it != m_items.begin())
	{
		--it;

		auto size = (*it)->sizeHint();

		if (w - size.width() >= _rect.left() || first)
		{
			first = false;
			m_visible_items.push_back(*it);
		}
		else
		{
			overflow = true;
			(*it)->setGeometry(QRect(0, 0, 0, 0));
			break;
		}

		w -= (size.width() + spacing());
	}

	//Set Geometry
	w = _rect.left();

	auto visIt = m_visible_items.end();
	while (visIt != m_visible_items.begin())
	{
		--visIt;
		auto size = (*visIt)->sizeHint();
		(*visIt)->setGeometry(QRect(QPoint(w, _rect.top()), size));

		w += (size.width() + spacing());
	}

	emit overflow_changed(overflow);
}
QSize styled_path_widget_layout::sizeHint() const
{
	int w = 0;
	int h = this->minimumSize().height();

	for (auto o : m_items)
	{
		QSize size = o->sizeHint();
		w += size.width();
		h = max(h, size.height() + this->contentsMargins().top() + this->contentsMargins().bottom());
	}

	w += this->contentsMargins().left() + this->contentsMargins().right() + max(0, m_items.count() - 1) * this->spacing();

	w = max(w, this->minimumSize().width());

	return QSize(w, h);
}
QSize styled_path_widget_layout::minimumSize() const
{
	int h = 21;

	for (auto o : m_items)
	{
		QSize size = o->sizeHint();
		h = max(h, size.height() + 1);
	}

	int w = 0;
	if (m_items.count() > 0)
		w = m_items.last()->sizeHint().width();

	return QSize(w, h);
}

bool styled_path_widget_layout::is_visible(QWidget* _widget)
{
	for (auto o : m_visible_items)
		if (o->widget() == _widget)
			return true;

	return false;
}