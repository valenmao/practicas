#include "cPersona.h"

int main()
{
	cPersona yo("Valentina");
	cPersona vos("emilia");
	yo.imprimir();
	string saludo=yo.saludar();
	cout <<"\n"<< saludo << endl;
	cout << yo;
	vos.imprimir();
	cout << vos;
	string nuevoSaludo=cPersona::saludar();
	cout << "\n" <<nuevoSaludo << endl;
}
