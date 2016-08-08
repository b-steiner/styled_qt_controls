#include <bdl.styled_qt_controls\styled_qt_controls.hpp>
#include "styled_dock_layout.q.hpp"

using namespace bdl::styled_qt_controls;

styled_dock_layout::styled_dock_layout() : QLayout() { }
styled_dock_layout::~styled_dock_layout()
{
	clear();
}


void styled_dock_layout::addItem(QLayoutItem* _item)
{
	m_list.append(_item);
	setGeometry(geometry());
}
QLayoutItem* styled_dock_layout::itemAt(int _idx) const
{
	return m_list.value(_idx);
}
QLayoutItem* styled_dock_layout::itemAt(QPoint p) const
{
	for (auto& it : m_visibleItems)
	{
		if (it->geometry().contains(p))
			return it;
	}

	return nullptr;
}
QLayoutItem* styled_dock_layout::takeAt(int _idx)
{
	if (_idx >= 0 && _idx < m_list.size())
	{
		auto item = m_list.takeAt(_idx);
		setGeometry(geometry());
		return item;
	}


	return  nullptr;
}
int styled_dock_layout::count() const
{
	return m_list.count();
}
void styled_dock_layout::swap(int i, int j)
{
	m_list.swap(i, j);
	setGeometry(geometry());
}

void styled_dock_layout::setGeometry(const QRect& _rect)
{
	QLayout::setGeometry(_rect);
	bool overflow = false;
	m_visibleItems.clear();

	int w = _rect.left();

	bool first = true;
	for (auto o : m_list)
	{
		QSize size = o->sizeHint();
		if (w + size.width() < _rect.width() || first)
		{
			o->setGeometry(QRect(QPoint(w, _rect.top() + contentsMargins().top()), size));
			m_visibleItems.push_back(o);
			first = false;
		}
		else
		{
			o->setGeometry(QRect(0, 0, 0, 0));
			overflow = true;
		}

		w += size.width() + spacing();
	}

	emit overflowChanged(overflow);
}
QSize styled_dock_layout::sizeHint() const
{
	int w = 0;
	int h = this->minimumSize().height();

	for (auto o : m_list)
	{
		QSize size = o->sizeHint();
		w += size.width();
		h = max(h, size.height() + this->contentsMargins().top() + this->contentsMargins().bottom());
	}

	w = max(w, this->minimumSize().width());

	return QSize(w, h);
}
QSize styled_dock_layout::minimumSize() const
{
	int h = 0;

	for (auto o : m_list)
	{
		QSize size = o->sizeHint();
		h = max(h, size.height());
	}

	return QSize(100, h);
}

bool styled_dock_layout::isVisible(QWidget* _widget)
{
	for (auto o : m_visibleItems)
		if (o->widget() == _widget)
			return true;

	return false;
}
void styled_dock_layout::clear()
{
	QLayoutItem* item;
	while ((item = takeAt(0)))
	{
		item->widget()->deleteLater();
		delete item;
	}
}