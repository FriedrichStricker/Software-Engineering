#include "ShowSheet.h"

ShowSheet::ShowSheet(QWidget *parent) : QMainWindow(parent) {
	ui.setupUi(this);
	this->setWindowTitle("Arbeit");
}


void ShowSheet::drawButtonDozentChange() {
	QPushButton *exit = new QPushButton("Abbrechen");
	QPushButton *confirm = new QPushButton("Bestätigen");

	ui.lay_sheet_btn->addWidget(exit);
	ui.lay_sheet_btn->addWidget(confirm);

	QObject::connect(exit, SIGNAL(clicked()), this, SLOT(exit()));
	QObject::connect(confirm, SIGNAL(clicked()), this, SLOT(confirm()));

	this->show();
}

void ShowSheet::drawButtonOpen() {
	QPushButton *close = new QPushButton("Schließen");

	ui.lay_sheet_btn->addWidget(close);

	QObject::connect(close, SIGNAL(clicked()), this, SLOT(close()));

	this->show();
}
