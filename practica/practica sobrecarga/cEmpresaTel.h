#pragma once
#include <list>
#include "cTelefonoNum.h"

using namespace std;
class cEmpresaTel
{
	list<cTelefonoNum> misTelefonos;
public:
	cEmpresaTel();
	~cEmpresaTel();

	cTelefonoNum& operator[](int pos);
	void set_lista(list<cTelefonoNum>* listaNueva);
	list<cTelefonoNum> getLista();
};

