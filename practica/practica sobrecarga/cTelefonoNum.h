#pragma once
#include <iostream>
#include <cmath>
#include <string>
#include "cList.h"

using namespace std;


class cTelefonoNum {
	int caracteristica;
	int primeros4;
	int ultimos4;
	string duenio;
public:
	cTelefonoNum(string,int, int, int);
	cTelefonoNum();

	~cTelefonoNum();
	int operator[](unsigned int pos);
	void operator-();
	bool operator==(cTelefonoNum derecha);
	bool operator!=(cTelefonoNum derecha);
	cTelefonoNum& operator=( cTelefonoNum *otro);
	int GET_CARACT();
	int GET_PRIM();
	int GET_ULT();
	string to_string();
	void set_carac(int caract);
	friend	istream& operator>>(istream& in, cTelefonoNum& objeto);
	friend ostream& operator<<(ostream& out, cTelefonoNum& objetos);
	string get_duenio();
	cTelefonoNum operator[](int pos);

};