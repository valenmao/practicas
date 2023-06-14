#pragma once
#include <string>
#include <iostream>

using namespace std;

class persona {
protected:
	string nombre;
	string apellido;
	string DNI;
public:
	persona(string, string, string);
	~persona();
	virtual void almorzar() = 0;

};