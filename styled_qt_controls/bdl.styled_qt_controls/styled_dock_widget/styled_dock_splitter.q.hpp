#pragma once

#include "../styled_qt_controls.hpp"
#include "../util/settings/settings_group.hpp"

BEGIN_BDL_SQTC

/*! \brief A splitter that can persist its child styled_dock_widgets 
	*
	* \author bdl
	*/
class BDL_SQTC_EXPORT styled_dock_splitter : public QSplitter
{
	Q_OBJECT;

public:
	/*! \brief Initializes a new instance of the styled_dock_splitter class
		*
		* \param orientation The orientation of the splitter (see QSplitter)
		* \param close_on_empty When set to true, the splitter removes itself from the parent layout when the last child is removed
		* \param parent Parent widget
		*/
	styled_dock_splitter(Qt::Orientation orientation, bool close_on_empty = false, QWidget* parent = nullptr);
	/*! \brief Releases all data associated with an instance of the styled_dock_splitter class
		*/
	virtual ~styled_dock_splitter();

	/*! \brief Saves the settings of this widget
		*
		* \returns The settings that should be saved
		*/
	util::settings_group* save_settings();
	/*! \brief Loads settings from a settings_group
		*
		* \param group The settings_group from which the settings should be loaded
		*/
	void load_settings(util::settings_group* group);

protected:
	//! See QSplitter
	void paintEvent(QPaintEvent* pe);
	//! See QSplitter
	void childEvent(QChildEvent* _child);

private:
	bool m_close_on_empty;
};

END_BDL_SQTC