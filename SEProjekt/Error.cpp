#include "Error.h"

Error::Error(QWidget *parent) : QMainWindow(parent) {
	ui.setupUi(this);
	this->setWindowTitle("Error");
}

void Error::on_btn_ok_clicked() {
	Error::close();
}

void Error::showText(QString message) {
	ui.txt_message->setText(message);
	this->show();
}


