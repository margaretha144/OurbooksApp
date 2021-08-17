#ifndef EXPLOREWIDGET_HPP
#define EXPLOREWIDGET_HPP

// Qt
// Required for inheritance
#include <QWidget>

class MainWidgets;

class ExploreWidget : public QWidget
{
	Q_OBJECT

public:
	explicit ExploreWidget(MainWidgets *parent=nullptr);

	ExploreWidget(const ExploreWidget&) = delete;
	ExploreWidget& operator=(const ExploreWidget&) = delete;

private:

};

#endif
