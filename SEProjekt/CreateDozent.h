#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_CreateDozent.h"
#include <string>
#include "CreateDozentServices.h"

using namespace std;

class CreateDozent : QMainWindow {

	Q_OBJECT

public:
	CreateDozent(QWidget *parent = Q_NULLPTR);

private:
	Ui::CreateDozent ui;

	private slots:
	void on_btn_confirm_clicked();
	void on_btn_cancel_clicked();

};
