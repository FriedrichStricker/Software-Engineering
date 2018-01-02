#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Error.h"
#include <string>

using namespace std;

class Error : public QMainWindow {

	Q_OBJECT

public:
	Error(QWidget *parent = Q_NULLPTR);

private:
	Ui::Error ui;

	public slots:
	void showText(QString message);

	private slots:
	void on_btn_ok_clicked();
};