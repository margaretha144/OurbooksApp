#ifndef BOOKWIDGET_HPP
#define BOOKWIDGET_HPP

// Qt
// Required for inheritance
#include <QWidget>

class MainWidgets;

class BookWidget : public QWidget
{
	Q_OBJECT

public:
	explicit BookWidget(MainWidgets *parent=nullptr);

	BookWidget(const BookWidget&) = delete;
	BookWidget& operator=(const BookWidget&) = delete;

private:
	
};

#endif
