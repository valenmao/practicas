#include "cPersona.h"

int cPersona::cant = 0;
cPersona::cPersona(int dni):dni(cant)
{
	this->nombre = "";
	this->datosmiCasa = "";
}

cPersona::cPersona(string nom):dni(++cant)
{
	this->nombre = nom;
	this->datosmiCasa = "";
}

string cPersona::to_string()
{
	stringstream out;
	out <<"Yo me llamo"<< nombre << ", mi dni es" << dni << ", somos" << cant << endl;

	return out.str();
}

cPersona::cPersona(cPersona& copia):dni(copia.dni)
{
	nombre = copia.nombre;
	cant++;
	this->datosmiCasa = "";
}

void cPersona::datosCasa(miCasa casa)
{
	this->datosmiCasa = casa.direccion;
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
ostream& operator<<(ostream& out, string nombre)
{
	out << nombre  ;
	return out;
}
ostream& operator<<(ostream& out, cPersona& imprimo)
{
	out << imprimo.dni << "";
	return out;
}