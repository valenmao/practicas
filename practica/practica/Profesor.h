#pragma once
#include "Estudiante.h"

class profesor : public persona
{
protected:
	string materia;
public:
	profesor(string, string, string, string);
	~profesor();
	void almorzar();

};