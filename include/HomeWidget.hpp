#ifndef HOMEWIDGET_HPP
#define HOMEWIDGET_HPP

// Qt
// Required for inheritance
#include <QStackedWidget>

class HomeWidget : public QWidget
{
	Q_OBJECT

public:
	explicit HomeWidget(QStackedWidget *widget=nullptr);

	HomeWidget(const HomeWidget&) = delete;
	HomeWidget& operator=(const HomeWidget&) = delete;
};

#endif
