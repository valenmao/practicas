#include "cEmpresaTel.h"

cEmpresaTel::cEmpresaTel()
{
}

cEmpresaTel::~cEmpresaTel()
{
}

cTelefonoNum& cEmpresaTel::operator[](int pos)
{
	cTelefonoNum*  retorno=new cTelefonoNum;
	int cont = 0;
	list<cTelefonoNum> ::iterator it;
	for (it = misTelefonos.begin(); it != this->misTelefonos.end(); it++)
	{
		if (cont == pos)
		{
			*retorno = *it;
		}
		cont++;
	}
	return *retorno;
}
void cEmpresaTel::set_lista(list<cTelefonoNum>* listaNueva)
{
	list<cTelefonoNum>::iterator it;
	for (it = listaNueva->begin(); it != listaNueva->end(); it++)
	{
		this->misTelefonos.push_back(*it);
	}
	
}
list<cTelefonoNum> cEmpresaTel::getLista()
{
	return this->misTelefonos;
}