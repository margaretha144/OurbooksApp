#ifndef OPTIONSWIDGET_HPP
#define OPTIONSWIDGET_HPP

// Qt
// Required for inheritance
#include <QWidget>

class MainWidgets;

class OptionsWidget : public QWidget
{
	Q_OBJECT

public:
	explicit OptionsWidget(MainWidgets *parent=nullptr);

	OptionsWidget(const OptionsWidget&) = delete;
	OptionsWidget& operator=(const OptionsWidget&) = delete;

private:

};

#endif
