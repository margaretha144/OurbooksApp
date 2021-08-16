#ifndef MAINWIDGETS_HPP
#define MAINWIDGETS_HPP

// Qt
// Required for inheritance
#include <QStackedWidget>

class BookWidget;
class HomeWidget;
class ExploreWidget;
class OptionsWidget;
class AboutWidget;

/**
 * @brief Class, that describes code main stacked widget
 */
class MainWidgets : public QStackedWidget
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

private:
	BookWidget *bookWidget;
	HomeWidget *homeWidget;
	ExploreWidget *exploreWidget;
	OptionsWidget *optionsWidget;
	AboutWidget *aboutWidget;

	void initWidget();
	void setupWidget();
};

#endif
