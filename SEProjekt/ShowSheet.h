#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ShowSheet.h"
#include <string>
#include "User.h"
#include <QtGui>
#include <QApplication>
#include <qpushbutton.h>

using namespace std;

class ShowSheet : public QMainWindow {

	Q_OBJECT

public:
	ShowSheet(QWidget *parent = Q_NULLPTR);
	
private:
	Ui::SheetType ui;

	private slots:
	void drawButtonDozentChange();
	void drawButtonOpen();

	void exit();
	void confirm();

	void close();
};

