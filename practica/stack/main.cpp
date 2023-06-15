#pragma once

#include "cPersona.h"

using namespace std;

int main()
{
	stack<cPersona*> pila;
	cPersona pers1("valentina");
	cPersona pers2("martina");
	cPersona pers3("lupe");
	cPersona pers4("saul");
	cPersona pers5("emi");

	pila.push(&pers1);
	pila.push(&pers2);
	pila.push(&pers3);
	pila.push(&pers4);
	pila.push(&pers5);

	cout<<pila.top()->get_nombre() << endl;//imprimo el de arriba de la pila
	pila.pop();//saco el de arriba de la pila
	cout << pila.top()->get_nombre() << endl;//imprimo el nuevo de arriba de la pila

	return 0;
}