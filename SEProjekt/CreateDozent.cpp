#include "CreateDozent.h"

CreateDozent::CreateDozent(QWidget *parent) : QMainWindow(parent) {
	ui.setupUi(this);
	this->setWindowTitle("Dozent erstellen");
	this->show();
}

void CreateDozent::on_btn_cancel_clicked() {
	CreateDozent::close();
}

void CreateDozent::on_btn_confirm_clicked() {
	//string text = ui.lsv_view->text().toStdString();
	//delegate
	CreateDozent::close();
}