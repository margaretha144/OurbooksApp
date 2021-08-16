#include "MainWidgets.hpp"
#include "BookWidget.hpp"
#include "HomeWidget.hpp"
#include "ExploreWidget.hpp"
#include "OptionsWidget.hpp"
#include "AboutWidget.hpp"

MainWidgets::MainWidgets(QWidget *widget) : QStackedWidget(widget),
	bookWidget(nullptr),
	homeWidget(nullptr),
	exploreWidget(nullptr),
	optionsWidget(nullptr),
	aboutWidget(nullptr)
{
	initWidget();
	setupWidget();	
}

void MainWidgets::initWidget()
{
	bookWidget = new BookWidget(this);
	homeWidget = new HomeWidget(this);
	exploreWidget = new ExploreWidget(this);
	optionsWidget = new OptionsWidget(this);
	aboutWidget = new AboutWidget(this);
}

void MainWidgets::setupWidget()
{
	this->addWidget(bookWidget);
	this->addWidget(homeWidget);
	this->addWidget(exploreWidget);
	this->addWidget(optionsWidget);
	this->addWidget(aboutWidget);
}
