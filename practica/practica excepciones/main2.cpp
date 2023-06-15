#include "funciones.h"
#include "cException.h"
int main()
{
	 int* ptr = new int;
	*ptr = 3;
	int valor = 4;
	try
	{
		cambioValor(ptr, valor);
		cout << *ptr << endl;
	}
	catch (exception *e)
	{
		cout << e->what() << endl;
	}

	ptr = nullptr;
	try
	{
		cambioValor(ptr, valor);
		cout << *ptr << endl;
	}
	catch (exception &e)	// ¿como salvo esta excepcion?
	{
		cout << e.what() << endl;
		int num = 6;
		ptr = &num;
		//cambioValor(ptr, valor);
		cout << *ptr << endl;
	}
	return 0;

}

void cambioValor(int* valor, int valorNuevo)
{
	if (nullptr == valor)
	{
		throw cException();
	}
	else 
		*valor = valorNuevo;

}




