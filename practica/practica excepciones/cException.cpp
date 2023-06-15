#include "cException.h"
const char* cException::what() const throw()
{
	return "puntero a null";
}