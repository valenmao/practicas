#include "Estudiante.h"

estudiante::estudiante(string nombre, string apellido, string dni, int notas):persona(nombre,apellido, dni)
{
	this->nota = notas;
}
estudiante:: ~estudiante(){

}
void estudiante:: almorzar()
{
	cout << "soy alumno" << endl;
}