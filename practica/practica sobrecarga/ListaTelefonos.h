#pragma once
#include <iostream>
#include "cList.h"
#include "cTelefonoNum.h"

using namespace std;

class ListaTelefono : public cList<cTelefonoNum> {
public:
	friend ostream& operator<<(ostream& o, ListaTelefono& data);
	void operator-(cTelefonoNum& tel);
};