#include "MainWindow.hpp"
#include "MenuBar.hpp"
#include "MainWidgets.hpp"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
	//initWidgets();
	createWidgets();
	//setupWidgets();
}

void MainWindow::createWidgets()
{
	QWidget *container = new QWidget(this);
	setCentralWidget(container);

	setupLayout = new QHBoxLayout(container);

	// Menu Bar
	menuBar = new MenuBar(this);
	setupLayout->addWidget(menuBar);

	// Main Widget
	mainWidget = new MainWidgets(this);
	setupLayout->addWidget(mainWidget);

}
