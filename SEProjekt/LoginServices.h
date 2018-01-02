#pragma once
#include <string>
#include "User.h"
#include "TypeEnum.h"

using namespace std;

class LoginServices {

public:
	User* checkLogin(string name, string passwort);
	User* checkLoginGuest();
};

