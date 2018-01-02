#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ChangePassword.h"
#include <string>

using namespace std;


class ChangePassword : public QMainWindow{

	Q_OBJECT

public:
	ChangePassword(QWidget *parent = Q_NULLPTR);

private:
	Ui::ChangePassword ui;

	private slots:
	void on_btn_accept_clicked();
	void on_btn_cancel_clicked();
};
