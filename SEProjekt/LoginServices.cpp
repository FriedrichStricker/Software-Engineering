#include "LoginServices.h"


// Implementierung SQL
User* LoginServices::checkLogin(string name, string passwort) {
	User *a = new User("email" ,"Max", ADMIN);
	return a;
}

User* LoginServices::checkLoginGuest() {
	User *a = new User("email2", "Ben", DOZENT);
	return a;
}
