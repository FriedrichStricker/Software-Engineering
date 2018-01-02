#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Login.h"
#include "LoginServices.h"
#include "Error.h"
#include "Confirm.h"
#include "User.h"
#include "MainWindow.h"

class Login : public QMainWindow {

	Q_OBJECT

public:
	Login(QWidget *parent = Q_NULLPTR);
	//void logintt(bool t);

private:
	Ui::LoginClass ui;

private slots:
	void on_btn_login_clicked();
	void on_btn_login_guest_clicked();
	void on_btn_exit_clicked();
};
