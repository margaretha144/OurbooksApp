#ifndef MENUBAR_HPP
#define MENUBAR_HPP

// Qt
// Required for inheritance
#include <QWidget>

/**
 * @brief Class, that describes left panel
 */
class MenuBar : public QWidget
{
	Q_OBJECT

public:
	/**
	 * @brief Constructor.
	 * @param widget Pointer to parent widget.
	 */
	explicit MenuBar(QWidget *widget=nullptr);

	// Disable copying
	MenuBar(const MenuBar&) = delete;
	MenuBar& operator=(const MenuBar&) = delete;
};

#endif
