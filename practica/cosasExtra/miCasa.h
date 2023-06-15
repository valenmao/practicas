
#pragma once
#include <iostream>
#include<string>

using namespace std;
class miCasa
{
	string direccion;
	string duenio;
	float costo;
public:
	miCasa(string, string, float);
	~miCasa();
	friend class cPersona;

};

