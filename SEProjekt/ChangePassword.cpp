#include "ChangePassword.h"
#include "PasswordServices.h"

ChangePassword::ChangePassword(QWidget *parent) : QMainWindow(parent) {
	ui.setupUi(this);
	this->setWindowTitle("Passwort �ndern");
}


//�bergabe einer anderen Funktion --> erm�glicht dynamisches Window
void ChangePassword::on_btn_accept_clicked() {
	ChangePassword::close();
}

//Schlie�en des Fensters 
void ChangePassword::on_btn_cancel_clicked() {
	ChangePassword::close();
}

