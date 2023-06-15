#include "cPersona.h"

int main()
{
	cPersona yo("Valentina");
	cPersona vos("emilia");
	cout << yo.to_string() << endl;
	yo.imprimir();
	string saludo=yo.saludar();
	cout << vos.cant;
	cout <<"\n"<< saludo << endl;
	cout << yo;
	vos.imprimir();
	cout << vos;
	string nuevoSaludo=cPersona::saludar();
	cout << "\n" <<nuevoSaludo << endl;
}
