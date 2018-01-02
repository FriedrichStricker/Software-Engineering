#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Search.h"
#include <string>

using namespace std;

class Search : QMainWindow {

	Q_OBJECT

public:
	Search(QWidget *parent = Q_NULLPTR);

private:
	Ui::Search ui;

	private slots:
	void on_btn_search_clicked();
	void on_btn_cancel_clicked();

};
