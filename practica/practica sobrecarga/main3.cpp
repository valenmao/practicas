
#include "cTelefonoNum.h"
#include "ListaTelefonos.h"

int main()
{
	
	cTelefonoNum miTelefono("val",1111, 2345, 6789);
	//cTelefonoNum tuTelefono(291, 2345, 6789);
	cin >> miTelefono;
	
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

	cout << miTelefono;
	cTelefonoNum tel1("1", 12, 12, 23);
	cTelefonoNum tel2("2", 12, 12, 23);
	cTelefonoNum tel3("3", 12, 12, 23);
	cTelefonoNum tel4("4", 12, 12, 23);
	cTelefonoNum tel5("5", 12, 12, 23);
	cTelefonoNum tel6("6", 12, 12, 23);
	cTelefonoNum tel7("7", 12, 12, 23);

	ListaTelefono listaTel;
	listaTel + tel1;
	listaTel + tel2;
	listaTel + tel3;
	 
	//cout << listaTel;

	return 0;

}





