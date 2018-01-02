#include "SheetType.h"


SheetType::SheetType(QWidget *parent) : QMainWindow(parent) {
	ui.setupUi(this);
	this->setWindowTitle("Arbeit");
	this->show();
}

void SheetType::on_btn_arbeit_clicked() {
}
void SheetType::on_btn_projekt_clicked() {
}
void SheetType::on_btn_abschluss_clicked() {
}
void SheetType::on_btn_cancel_clicked() {
	SheetType::close();
}
