#pragma once

#include "cPersona.h"

using namespace std;

int main()
{
	vector<cPersona*> miVector;
	cPersona pers1("valentina");
	cPersona pers2("martina");
	cPersona pers3("lupe");
	cPersona pers4("saul");
	cPersona pers5("emi");

	miVector.push_back(&pers1);
	miVector.push_back(&pers2);
	miVector.push_back(&pers3);
	miVector.push_back(&pers4);
	miVector.push_back(&pers5);

	cout << miVector[3]->get_nombre() << endl;
	miVector[1] = &pers5;//si igualo lo reemplazo
	miVector[1]->set_nombre("pochi");//como estan [1] y [5] apuntando a esta casilla cuando cambie uno cambio el otro

	cout<< miVector[1]->get_nombre() << endl;
	cout << endl;
	for (int i = 0; i < miVector.size(); i++)
	{
		cout << miVector[i]->get_nombre() << endl;
	}

	miVector.erase( miVector.begin()+2);//elimina miVector[2]
	cout << endl;
	for (int i = 0; i < miVector.size(); i++)
	{
		cout << miVector[i]->get_nombre() << endl;
	}

	miVector.pop_back();//elimino el ultimo
	cout << endl;
	for (int i = 0; i < miVector.size(); i++)
	{
		cout << miVector[i]->get_nombre() << endl;
	}

	miVector.insert(miVector.begin()+3, &pers4);//agrega persona4 en la pos miVector[3]
	cout << endl;
	for (int i = 0; i < miVector.size(); i++)
	{
		cout << miVector[i]->get_nombre() << endl;
	}
	return 0;
}