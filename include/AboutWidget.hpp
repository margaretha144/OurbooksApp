#ifndef ABOUTWIDGET_HPP
#define ABOUTWIDGET_HPP

// Qt
// Required for inheritance
#include <QWidget>

class MainWidgets;

class AboutWidget : public QWidget
{
	Q_OBJECT

public:
	explicit AboutWidget(MainWidgets *parent=nullptr);

	AboutWidget(const AboutWidget&) = delete;
	AboutWidget& operator=(const AboutWidget&) = delete;

private:

};

#endif
