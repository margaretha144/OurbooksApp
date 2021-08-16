#ifndef EXPLOREWIDGET_HPP
#define EXPLOREWIDGET_HPP

// Qt
// Required for inheritance
#include <QStackedWidget>

class ExploreWidget : public QWidget
{
	Q_OBJECT

public:
	explicit ExploreWidget(QStackedWidget *widget=nullptr);

	ExploreWidget(const ExploreWidget&) = delete;
	ExploreWidget& operator=(const ExploreWidget&) = delete;
};

#endif
