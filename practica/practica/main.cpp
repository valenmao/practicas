#include "cafeteria.h"


int main()
{
	estudiante* ptrEst;
	profesor* ptrProf;

	cafeteria miCafeteria("valen");

	estudiante estudiante("emi", "fasano", "456789", 9);
	profesor profesor("saul", "lezama", "456789", "programacion");
	
	ptrEst = &estudiante;
	ptrProf = &profesor;
	
	persona* ptrPers = ptrEst;
	miCafeteria.prepararAlmuerzo(ptrPers);
	ptrPers = ptrProf;
	miCafeteria.prepararAlmuerzo(ptrPers);
	


	return 0;
}