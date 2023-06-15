#include "cPersona.h"
int cPersona::cant = 0;
cPersona::cPersona(int dni) :dni(cant)
{
	this->nombre = "";

}

cPersona::cPersona(string nom) :dni(++cant)
{
	this->nombre = nom;

}
void cPersona::set_nombre(string nom)
{
	this->nombre = nom;
}
cPersona::cPersona(cPersona& copia) :dni(copia.dni)
{
	nombre = copia.nombre;
}
cPersona::cPersona() :dni(cant)
{
	this->nombre = "";
	cant++;
}

cPersona::~cPersona()
{
}
string cPersona::get_nombre()
{
	return this->nombre;
}
int cPersona::get_dni()
{
	return this->dni;
}
string cPersona::saludar()
{
	string retorno = "Hello World";
	retorno = retorno;
	return retorno;
}

void cPersona::imprimir() const
{
	cout << this->nombre;
}

