#ifndef HOMEWIDGET_HPP
#define HOMEWIDGET_HPP

// Qt
// Required for inheritance
#include <QWidget>

class MainWidgets;

class HomeWidget : public QWidget
{
	Q_OBJECT

public:
	explicit HomeWidget(MainWidgets *parent=nullptr);

	HomeWidget(const HomeWidget&) = delete;
	HomeWidget& operator=(const HomeWidget&) = delete;

private:
	
};

#endif
