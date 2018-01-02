#include "MainWindow.h"


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
	ui.setupUi(this);
	this->setWindowTitle("Main Window");
}

void MainWindow::search(string text) {

}

void MainWindow::setUpAndShow(User* user) {
	this->setWindowTitle(QString::fromStdString("Willkommen " + user->name));

	switch (user->type) {
		case TypeEnum::ADMIN:
			this->drawAdminButton();
			break;
		case TypeEnum::DOZENT:
			this->drawDozentButton();
			break;
		case TypeEnum::GUEST:
			this->drawGuestButton();
			break;
		default:
			break;
	}

	// ListView setting --> Einträge in dén View erstellen
	// Selektierung möglich
	// vorerst statisch

	model = new QStringListModel();
	QStringList list;
	list << "Eintrag 1" << "Eintrag 2" << "Eintrag 3";
	model->setStringList(list);
	ui.lsv_list->setModel(model);
	ui.lsv_list->setEditTriggers(QAbstractItemView::NoEditTriggers);
	this->show();
}

void MainWindow::drawDozentButton() {
	//Generieren der Buttons
	QPushButton *createSheet = new QPushButton("Eintrag erstellen");
	QPushButton *deleteSheet = new QPushButton("Eintrag löschen");
	QPushButton *changeSheet = new QPushButton("Eintrag bearbeiten");
	QPushButton *changePasswordDozent = new QPushButton("Passwort ändern");
	QPushButton *openSheet = new QPushButton("Eintrag öffnen");
	
	// Einfügen der Buttons in das Layout
	ui.lay_btns->addWidget(createSheet);
	ui.lay_btns->addWidget(deleteSheet);
	ui.lay_btns->addWidget(changeSheet);
	ui.lay_btns->addWidget(changePasswordDozent);
	ui.lay_btns->addWidget(openSheet);

	// Connecten der Buttons mit den Funktionen
	QObject::connect(createSheet, SIGNAL(clicked()), this, SLOT(createSheet()));
	QObject::connect(deleteSheet, SIGNAL(clicked()), this, SLOT(deleteSheet()));
	QObject::connect(changeSheet, SIGNAL(clicked()), this, SLOT(changeSheet()));
	QObject::connect(changePasswordDozent, SIGNAL(clicked()), this, SLOT(changePasswordDozent()));
	QObject::connect(openSheet, SIGNAL(clicked()), this, SLOT(openSheet()));
}

void MainWindow::drawAdminButton() {
	QPushButton *createDozent = new QPushButton("Dozent anlegen");
	QPushButton *deleteDozent = new QPushButton("Dozent löschen");
	QPushButton *changePasswordAdmin = new QPushButton("Passwort eines Dozenten ändern");

	ui.lay_btns->addWidget(createDozent);
	ui.lay_btns->addWidget(deleteDozent);
	ui.lay_btns->addWidget(changePasswordAdmin);

	QObject::connect(createDozent, SIGNAL(clicked()), this, SLOT(createDozent()));
	QObject::connect(deleteDozent, SIGNAL(clicked()), this, SLOT(deleteDozent()));
	QObject::connect(changePasswordAdmin, SIGNAL(clicked()), this, SLOT(changePasswordAdmin()));

}

void MainWindow::drawGuestButton() {
	QPushButton *openSheet = new QPushButton("Eintrag öffnen");
	ui.lay_btns->addWidget(openSheet);
}


// Buttonfunktionen Dozent

void MainWindow::createSheet() {
	SheetType *sheet = new SheetType();
}

void MainWindow::deleteSheet() {
	Confirm *conf = new Confirm();
	conf->showText("Eintrag wirklich löschen?", NULL);
}

void MainWindow::changeSheet() {
}

void MainWindow::changePasswordDozent() {
	ChangePassword *pass = new ChangePassword(this);
}

void MainWindow::openSheet() {
}


// Buttonfunktionen Admin

void MainWindow::createDozent() {
	CreateDozent *dozWin = new CreateDozent(this);
}

void MainWindow::deleteDozent() {
	Confirm *conf = new Confirm(this);
	conf->showText("dummkopf2", NULL);
}

void MainWindow::changePasswordAdmin() {
	Confirm *conf = new Confirm(this);
	conf->showText("dummkopf", NULL);
}