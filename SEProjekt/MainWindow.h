#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MainWindow.h"
#include <string>
#include "User.h"
#include <QApplication>
#include <qpushbutton.h>
#include <QtGui>
#include "Error.h"
#include "Confirm.h"
#include "CreateDozent.h"
#include "ChangePassword.h"
#include "SheetType.h"


using namespace std;

class MainWindow : public QMainWindow {

	Q_OBJECT

public:
	void search(string text);
	MainWindow(QWidget *parent = Q_NULLPTR);
	void setUpAndShow(User* user);

private:
	Ui::MainWindow ui;
	QStringListModel *model;

	private slots:
	// Funktionen der Button generierung je nach Typ
	void drawDozentButton();
	void drawAdminButton();
	void drawGuestButton();
	
	// Funktionen der Buttons des Dozenten
	void createSheet();
	void deleteSheet();
	void changeSheet();
	void changePasswordAdmin();
	void openSheet();

	// Funktionen der Buttons des Admins
	void createDozent();
	void deleteDozent();
	void changePasswordDozent();

};

