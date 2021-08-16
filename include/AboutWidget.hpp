#ifndef ABOUTWIDGET_HPP
#define ABOUTWIDGET_HPP

// Qt
// Required for inheritance
#include <QStackedWidget>

class AboutWidget : public QWidget
{
	Q_OBJECT

public:
	explicit AboutWidget(QStackedWidget *widget=nullptr);

	AboutWidget(const AboutWidget&) = delete;
	AboutWidget& operator=(const AboutWidget&) = delete;
};

#endif
