

#pragma once

#include <iostream>
#include<string>
#include <list>
#include <algorithm>
using namespace std;

class cPersona
{
	string nombre;
	const int dni;

public:
	static int cant;
	cPersona(int dni = cant++);
	cPersona(string);
	cPersona();
	cPersona(cPersona&);
	~cPersona();
	static string saludar();
	void imprimir() const;
	string get_nombre();
	int get_dni();

};
