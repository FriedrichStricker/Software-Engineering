#pragma once
#include <QtWidgets/QMainWindow>
#include "ui_Confirm.h"
#include <string>

using namespace std;

class Confirm : public QMainWindow {

	Q_OBJECT

public:
	Confirm(QWidget *parent = Q_NULLPTR);
	function<void(bool)> callback;
private:
	Ui::Confirm ui;

public slots:
	void showText(QString message, function<void(bool)> result);

private slots:
	void on_btn_accept_clicked();
	void on_btn_cancel_clicked();
};