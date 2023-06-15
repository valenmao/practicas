

#pragma once

#include "cPersona.h"

using namespace std;

int main()
{
	cPersona pers1("valentina");
	cPersona pers2("martina");
	cPersona pers3("lupe");
	cPersona pers4("saul");
	cPersona pers5("emi");
	list<cPersona*> listado;//si no lo creo como puntero no me lo guarda, 
	//a list no le gustan mucho las clases
	listado.push_back(&pers1);
	listado.push_back(&pers2);
	listado.push_back(&pers3);

	for (cPersona* per: listado)//recorro la lista con un puntero de persona que va avanzando en las posiciones
	{
		cout << per->get_nombre() << endl;
	}
	cout << listado.front()->get_nombre() << endl;//me da la pos [0]

	listado.remove(&pers2);//busca esa direc de memoria y la elimina
	//(si no fuera puntero y le pasara el objeto no funciona)
	cout << endl;
	cout << endl;

	for (cPersona* per : listado)//chequeo si borro bien la persona
	{
		cout << per->get_nombre() << endl;
	}
	cout << endl;
	cout << endl;

	listado.erase(listado.begin(), listado.end());//elimino toda la lista
	listado.push_back(&pers4);//agrego una persona para tener algo quer imprimir
	for (cPersona* per : listado)//chequeo que elimino bien
	{
		cout << per->get_nombre() << endl;
	}
	//no se que mas probar
	
}
