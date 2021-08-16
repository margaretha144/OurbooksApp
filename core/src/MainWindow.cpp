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

	setupHLayout = new QHBoxLayout(container);
	setupVLayout = new QVBoxLayout();

	// Menu Bar
	menuBar = new MenuBar(this);
	setupHLayout->addWidget(menuBar);

	// Main Widget
	QWidget *rightWidget = new QWidget(this);
	setupVLayout = new QVBoxLayout(rightWidget);

	// Main Widget Component Stacked
	mainWidget = new MainWidgets(this);
	setupVLayout->addWidget(mainWidget);
	
	setupHLayout->addWidget(rightWidget);

	//mainWidget = new MainWidgets(this);
	//setupLayout->addWidget(mainWidget);

}
