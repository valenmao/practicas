#pragma once
#include "..\cosasExtra\cPersona.h"
#include <iostream>
#include<string>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
	cPersona pers1("Valentina");
	cPersona pers2("Guadalupe");
	cPersona pers3("Martina");
	cPersona pers4("Saul");
	cPersona pers5("Pochi");
	list<cPersona> lista;
	lista.push_back(pers1);
	lista.push_back(pers2);
	lista.push_back(pers3);
	lista.push_back(pers4);


}