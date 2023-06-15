
#include "cTelefonoNum.h"
#include "ListaTelefonos.h"
#include "cEmpresaTel.h"

int main()
{
	
	//cTelefonoNum miTelefono("val",1111, 2345, 6789);
	////cTelefonoNum tuTelefono(291, 2345, 6789);
	//cin >> miTelefono;
	
	/*int numero=miTelefono.operator[](0);
	cout << numero << endl;
	numero = miTelefono.operator[](1);
	cout << numero << endl;
	numero = miTelefono.operator[](2);
	cout << numero << endl;
	numero = miTelefono.operator[](3);
	cout << numero << endl;
	numero = miTelefono.operator[](4);
	cout << numero << endl;
	numero = miTelefono.operator[](5);
	cout << numero << endl;
	numero = miTelefono.operator[](6);
	cout << numero << endl;
	numero = miTelefono.operator[](7);
	cout << numero << endl;
	numero = miTelefono.operator[](8);
	cout << numero << endl;
	numero = miTelefono.operator[](9);
	cout << numero << endl;*/
	/*cout << miTelefono;
	-miTelefono;
	cout << miTelefono;
	bool iguales = (miTelefono == tuTelefono);
	if (iguales == true)
		cout << "true";
	else
		cout << "false";*/

	//cout << miTelefono;
	cTelefonoNum tel1("Valen", 12, 12, 23);
	cTelefonoNum tel2("Martu", 12, 12, 23);
	cTelefonoNum tel3("Lupe", 12, 12, 23);
	cTelefonoNum tel4("Saul", 12, 12, 23);
	cTelefonoNum tel5("Emi", 12, 12, 23);

	//list<cTelefonoNum> listaTel;
	//listaTel.push_back(tel1);
	//listaTel.push_back(tel2);
	//listaTel.push_back(tel3);
	//listaTel.push_back(tel4);
	//listaTel.push_back(tel5);
	//cEmpresaTel miEmpresa;
	//miEmpresa.set_lista(&listaTel);
	//string imprimir = miEmpresa[3].get_duenio();
	//cout << imprimir << endl;

	ListaTelefono listaTel;
	listaTel + tel1;
	listaTel + tel2;
	listaTel + tel3;
	listaTel - tel1;

	cout << listaTel;

	return 0;

}





