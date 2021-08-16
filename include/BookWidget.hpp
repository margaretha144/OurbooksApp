#ifndef BOOKWIDGET_HPP
#define BOOKWIDGET_HPP

// Qt
// Required for inheritance
#include <QStackedWidget>

class BookWidget : public QWidget
{
	Q_OBJECT

public:
	explicit BookWidget(QStackedWidget *widget=nullptr);

	BookWidget(const BookWidget&) = delete;
	BookWidget& operator=(const BookWidget&) = delete;

};

#endif
