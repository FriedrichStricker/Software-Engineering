#pragma once
#include <QtWidgets/QMainWindow>
#include "ui_SheetType.h"
#include <string>

using namespace std;

class SheetType : public QMainWindow {

	Q_OBJECT

public:
	SheetType(QWidget *parent = Q_NULLPTR);

private:
	Ui::SheetType ui;

	private slots:
	void on_btn_arbeit_clicked();
	void on_btn_projekt_clicked();
	void on_btn_abschluss_clicked();
	void on_btn_cancel_clicked();
};


