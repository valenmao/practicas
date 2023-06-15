#pragma once

#include "cPersona.h"

using namespace std;

int main()
{
	queue<cPersona*> cola;
	cPersona pers1("valentina");
	cPersona pers2("martina");
	cPersona pers3("lupe");
	cPersona pers4("saul");
	cPersona pers5("emi");

	cola.push(&pers1);
	cola.push(&pers2);
	cola.push(&pers3);
	cola.push(&pers4);
	cola.push(&pers5);

	cout << cola.front()->get_nombre() << endl;//imprimo el inicio de la cola
	cout << cola.back()->get_nombre() << endl;//imprimo el final de la cola
	cola.pop();//saco el primero
	cout << cola.front()->get_nombre() << endl;//imprimo nuevo inicio de la cola

	return 0;
}