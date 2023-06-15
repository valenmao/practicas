#include "miCasa.h"

using namespace std;

class cPersona
{
	string nombre;
	const int dni;
	string datosmiCasa;

public:
	string to_string();
	static int cant;
	cPersona(int dni = cant++);
	cPersona(string);
	cPersona(cPersona&);
	~cPersona();
	static string saludar();
	void imprimir() const;
	string get_nombre();
	int get_dni();
	void datosCasa(miCasa casa);
	friend ostream& operator<<(ostream& out, string nombre);
	friend ostream& operator<<(ostream& out, cPersona&);
};
