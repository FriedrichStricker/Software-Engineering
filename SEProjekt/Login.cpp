#include "Login.h"


Login::Login(QWidget *parent): QMainWindow(parent){
	ui.setupUi(this);
	this->setWindowTitle("Login");
}


//Button "Anmelden". Bei Klick werden Buttons disabled --> vermeidung weiterer Aufrufe.
//Wenn Status true dann werden die Eingaben in der Datenbank verglichen.
//sollten die Eingaben Fehlerhaft sein bzw. Status false dann enable die Buttons.

void Login::on_btn_login_clicked() {
	
	ui.btn_login->setDisabled(true);
	ui.btn_login_guest->setDisabled(true);
	ui.btn_exit->setDisabled(true);

	LoginServices s;
	User* user = s.checkLogin(ui.txt_email->text().toStdString(), ui.txt_password->text().toStdString());
	if (user != NULL) {
		MainWindow *main = new MainWindow();
		main->setUpAndShow(user);
		Login::close();
	}
	else {
		Error *w = new Error();
		w->showText("Falsche Einfabe von Passwort oder E-Mail");
		ui.btn_login->setDisabled(false);
		ui.btn_login_guest->setDisabled(false);
		ui.btn_exit->setDisabled(false);
	}
}


//Button "Anmelden als Gast". Bei Klick werden die Buttons disabled --> vermeidung weiterer Aufrufe.
void Login::on_btn_login_guest_clicked() {
	
	ui.btn_login->setDisabled(true);
	ui.btn_login_guest->setDisabled(true);
	ui.btn_exit->setDisabled(true);

	LoginServices s;
	User *user = s.checkLoginGuest();
	MainWindow *main = new MainWindow();
	main->setUpAndShow(user);
	Login::close();

	//Confirm *w = new Confirm(this);
	//auto callback = std::bind(&Login::logintt, this, std::placeholders::_1);
	//w->showText("Falsche Einfabe von Passwort oder E-Mail",callback);

}

	//void Login::logintt(bool result) {
	//
	//}

//Button "Beenden". Bei Klick wird das Fenster Geschlossen und das Programm beendet.
void Login::on_btn_exit_clicked() {
	Login::close();
}
