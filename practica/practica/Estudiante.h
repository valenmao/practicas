#pragma once
#include "Persona.h"

class estudiante : public persona
{	protected:
	int nota;
public:
	estudiante(string, string, string, int);
	~estudiante();
	void almorzar();

};