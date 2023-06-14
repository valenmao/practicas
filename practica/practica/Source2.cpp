#include "Profesor.h"
profesor::profesor(string nom, string ap, string dni, string materia):persona(nom,ap,dni)
{
	this->materia = materia;
}
profesor::~profesor()
{

}
void profesor::almorzar()
{
	cout << "soy profe" << endl;
}
