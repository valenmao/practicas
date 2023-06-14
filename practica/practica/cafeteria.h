#pragma once
#include "Profesor.h"

class cafeteria
{
	string nombre;
public:
	cafeteria(string);
	~cafeteria();
	void prepararAlmuerzo(persona*);
};