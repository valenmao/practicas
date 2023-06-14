#include "ListaTelefonos.h"

ostream& operator<<(ostream& o, ListaTelefono& data) {
	for (cTelefonoNum aux : data) {
		o << aux;
	}
	return o;

}
