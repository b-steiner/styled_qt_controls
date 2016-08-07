#pragma once

#define SET_STYLE(type,name)				void			name(type const &  value)	{ m_##name = value; style()->unpolish(this); style()->polish(this); }

#define SET_NOTIFY_PROPERTY_CHANGED(type,name) void			name(type const &  value)	{ m_##name = value; emit property_changed(#name); }