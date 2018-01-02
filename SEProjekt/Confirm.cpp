#include "Confirm.h"

Confirm::Confirm(QWidget *parent) : QMainWindow(parent) {
	ui.setupUi(this);
	this->setWindowTitle("Bestätigung");
}


//Übergabe einer anderen Funktion --> ermöglicht dynamisches Window
void Confirm::on_btn_accept_clicked() {
	callback(true);
}

//Schließen des Fensters 
void Confirm::on_btn_cancel_clicked() {
	callback(false);
	Confirm::close();
}

//generierung der Message
void Confirm::showText(QString message ,std::function<void(bool)> resultcallback) {
	ui.txt_confirm_message->setText(message);
	this->show();
	this->callback = resultcallback;
}