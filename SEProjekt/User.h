#pragma once

#include <string>
#include "TypeEnum.h"

using namespace std;

class User {

public:
	string id;
	string name;
	TypeEnum type;

	User(string id, string name, TypeEnum type);
};

