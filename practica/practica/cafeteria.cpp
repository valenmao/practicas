
#include "cafeteria.h"

cafeteria::cafeteria(string nom)
{
	this->nombre = nom;
}
cafeteria::~cafeteria()
{

}
void cafeteria:: prepararAlmuerzo(persona*_persona)
{
	estudiante* ptrEst = dynamic_cast<estudiante*>(_persona);
	profesor* ptrProf = dynamic_cast<profesor*>(_persona);
	if (ptrEst != nullptr)
		ptrEst->almorzar();
	else
		ptrProf->almorzar();
}