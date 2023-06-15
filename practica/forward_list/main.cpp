

#pragma once

#include "cPersona.h"

using namespace std;

int main()
{
	forward_list<cPersona*> lista;
	cPersona pers1("valentina");
	cPersona pers2("martina");
	cPersona pers3("lupe");
	cPersona pers4("saul");
	cPersona pers5("emi");
	//siempre que agrego voy a ir agregando al principio de la lista
	lista.push_front(&pers1);
	lista.push_front(&pers2);
	lista.push_front(&pers3);
	lista.push_front(&pers4);
	for (cPersona* pers : lista)
	{
		cout << pers->get_nombre() << endl;
	}

	cout << endl;
	lista.pop_front();//saco el primero
	for (cPersona* pers : lista)
	{
		cout << pers->get_nombre() << endl;
	}

	cout << endl;
	lista.remove(&pers2);//elimino una especifica
	for (cPersona* pers : lista)
	{
		cout << pers->get_nombre() << endl;
	}

	lista.push_front(&pers3);//agrego para probar funcion unique
	cout << endl;
	for (cPersona* pers : lista)
	{
		cout << pers->get_nombre() << endl;
	}

	lista.unique();//saca todos los repetidos
	cout << endl;
	for (cPersona* pers : lista)
	{
		cout << pers->get_nombre() << endl;
	}
}