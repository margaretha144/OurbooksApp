#ifndef MAINWIDGETS_HPP
#define MAINWIDGETS_HPP

// Qt
// Required for inheritance
#include <QWidget>

/**
 * @brief Class, that describes code main stacked widget
 */
class MainWidgets : public QWidget
{
	Q_OBJECT

public:
	/**
	 * @brief Constructor.
	 * @param widget Pointer to parent widget.
	 */
	explicit MainWidgets(QWidget *widget=nullptr);
	
	// Disable copying
	MainWidgets(const MainWidgets&) = delete;
	MainWidgets& operator=(const MainWidgets&) = delete;

};

#endif
