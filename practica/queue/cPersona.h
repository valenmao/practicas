#pragma once

#include <iostream>
#include<string>
#include <queue>
#include <algorithm>
using namespace std;

class cPersona
{
	string nombre;
	const int dni;

public:
	void set_nombre(string);
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
