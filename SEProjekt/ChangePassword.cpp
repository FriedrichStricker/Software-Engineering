#include "ChangePassword.h"
#include "PasswordServices.h"

ChangePassword::ChangePassword(QWidget *parent) : QMainWindow(parent) {
	ui.setupUi(this);
	this->setWindowTitle("Passwort ändern");
}


//Übergabe einer anderen Funktion --> ermöglicht dynamisches Window
void ChangePassword::on_btn_accept_clicked() {
	ChangePassword::close();
}

//Schließen des Fensters 
void ChangePassword::on_btn_cancel_clicked() {
	ChangePassword::close();
}

