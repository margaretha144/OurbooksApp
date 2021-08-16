#include "MenuBar.hpp"

#include <QVBoxLayout>

MenuBar::MenuBar(QWidget *widget) : QWidget(widget),
	bookButton(nullptr),
	homeButton(nullptr),
	exploreButton(nullptr),
	optionsButton(nullptr),
	aboutButton(nullptr),
	expandButton(nullptr)
{
	initMenu();
	setupMenu();
}

void MenuBar::initMenu()
{
	bookButton = new QPushButton("Books", this);
	homeButton = new QPushButton("Home", this);
	exploreButton = new QPushButton("Explore", this);
	optionsButton = new QPushButton("Options", this);
	aboutButton = new QPushButton("About", this);
	expandButton = new QPushButton("Expand", this);
}

void MenuBar::setupMenu()
{
	QVBoxLayout *menuLayout = new QVBoxLayout(this);
	
	menuLayout->addWidget(bookButton);
	menuLayout->addWidget(homeButton);
	menuLayout->addWidget(exploreButton);
	menuLayout->addWidget(optionsButton);
	menuLayout->addWidget(aboutButton);
	menuLayout->addWidget(expandButton);

	this->setMaximumWidth(70);
}
