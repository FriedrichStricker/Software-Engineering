#pragma once
#include <string>

using namespace std;

class PasswordServices {

public:
	PasswordServices();
	~PasswordServices();
	bool checkOldPassword(string password);
	bool checkNewPassword(string password1, string password2);
};
