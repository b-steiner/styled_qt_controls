#pragma once

#include "..\styled_qt_controls.hpp"

BEGIN_BDL_SQTC


/*
*DIRECT PROPERTIES
*/

#ifndef STORAGE
#define STORAGE(type,name)			type			m_##name##;
#endif

// Automatic generated accessors

#ifndef GET_CONST
#define GET_CONST(type,name)		type const		name()		const			{ return  m_##name; }
#endif
#ifndef GET
#define GET(type,name)				type			name()		const			{ return  m_##name; }
#endif
#ifndef GET_REF
#define GET_REF(type,name)			type &			name()						{ return  m_##name; }
#endif
#ifndef GET_CONST_REF
#define GET_CONST_REF(type,name)	type const &	name()		const			{ return  m_##name; }
#endif
#ifndef GET_PTR
#define GET_PTR(type,name)			type *			name()						{ return &m_##name; }
#endif
#ifndef GET_CONST_PTR
#define GET_CONST_PTR(type,name)	type const *	name()		const			{ return &m_##name; }
#endif
#ifndef SET
#define SET(type,name)				void			name(type const &  value)	{ m_##name = value; }
#endif

// Custom implemented accessors

#ifndef GET_CONST_PT
#define GET_CONST_PT(type,name)			 type const		name()		const;
#endif
#ifndef GET_PT
#define GET_PT(type,name)				 type			name()		const;
#endif
#ifndef GET_REF_PT
#define GET_REF_PT(type,name)			 type &			name()			 ;
#endif
#ifndef GET_CONST_REF_PT
#define GET_CONST_REF_PT(type,name)	type const &		name()		const;
#endif
#ifndef GET_PTR_PT
#define GET_PTR_PT(type,name)			 type *			name()			 ;
#endif
#ifndef GET_CONST_PTR_PT
#define GET_CONST_PTR_PT(type,name)	type const *		name()		const;
#endif
#ifndef SET_PT
#define SET_PT(type,name)				 void			name(type const &  value);
#endif


#ifndef PROPERTY0
#define PROPERTY0(type,name)						protected: \
														STORAGE(type,name)
#endif

#ifndef PROPERTY1
#define PROPERTY1(type,name,acc1)					protected: \
														STORAGE(type,name) \
													public: \
														acc1##(type,name)
#endif

#ifndef PROPERTY2
#define PROPERTY2(type,name,acc1,acc2)				protected: \
														STORAGE(type,name) \
													public: \
														acc1##(type,name) \
													public: \
														acc2##(type,name)
#endif

#ifndef PROPERTY3
#define PROPERTY3(type,name,acc1,acc2,acc3)			protected: \
														STORAGE(type,name) \
													public: \
														acc1##(type,name) \
													public: \
														acc2##(type,name) \
													public: \
														acc3##(type,name)
#endif


END_BDL_SQTC