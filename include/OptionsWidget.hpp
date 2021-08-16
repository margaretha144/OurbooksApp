#ifndef OPTIONSWIDGET_HPP
#define OPTIONSWIDGET_HPP

// Qt
// Required for inheritance
#include <QStackedWidget>

class OptionsWidget : public QWidget
{
	Q_OBJECT

public:
	explicit OptionsWidget(QStackedWidget *widget=nullptr);

	OptionsWidget(const OptionsWidget&) = delete;
	OptionsWidget& operator=(const OptionsWidget&) = delete;

};

#endif
