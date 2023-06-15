#include "ListaTelefonos.h"

ostream& operator<<(ostream& o, ListaTelefono& data) {
	for (cTelefonoNum *aux : data) {
		o << *aux;
	}
	return o;

}

void ListaTelefono::operator-(cTelefonoNum& tel)
{
	this->remove(&tel);
}
