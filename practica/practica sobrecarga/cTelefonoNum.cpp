#include"cTelefonoNum.h"

cTelefonoNum::cTelefonoNum(string due,int carac, int prim, int ult)
{
	this->duenio = due;
	this->caracteristica = carac;
	this->primeros4 = prim;
	this->ultimos4 = ult;
}
cTelefonoNum::~cTelefonoNum()
{

}

int cTelefonoNum::operator[](unsigned int pos)
{
	//defino la extension de caracteristica
	int extension = 0;
	int pruebaLargo = 0;
	do
	{
		pruebaLargo=this->caracteristica / (int)(pow(10, extension));
		extension++;
	} while (pruebaLargo!=0);
	extension = extension - 1;
	int numero=0;
	if (pos < extension)
	{
		int numAux = 0;
		int nuevaPos = extension - pos;
		numAux = this->caracteristica / (int)(pow(10, nuevaPos-1));
		numero = numAux % 10;
	}
	else if (pos < extension+4)
	{
		int numAux = 0;
		int nuevaPos = 4-(pos - extension);
		numAux = this->primeros4 / (int)(pow(10, nuevaPos-1));
		numero = numAux % 10;
	}
	else
	{
		int numAux = 0;
		int nuevaPos = 4-(pos - (extension+4));
		numAux = this->ultimos4 / (int)(pow(10, nuevaPos-1));
		numero = numAux % 10;
		
	}
	return numero;
}
void cTelefonoNum::operator-()
{
	this->caracteristica = 0;
	this->primeros4 = 0;
	this->ultimos4 = 0;
}
bool cTelefonoNum::operator==(cTelefonoNum derecha)
{
	if (this->caracteristica == derecha.caracteristica && this->primeros4 == derecha.primeros4 && this->ultimos4 == derecha.ultimos4)
		return true;
	return false;
}
bool cTelefonoNum:: operator!=(cTelefonoNum derecha)
{
	return false;
}
cTelefonoNum& cTelefonoNum::operator=(const cTelefonoNum otro)
{
	cTelefonoNum aux("3",11,4554,5323);
	return aux;

}
int cTelefonoNum ::GET_CARACT()
{
	return this->caracteristica;
}
int cTelefonoNum::GET_PRIM()
{
	return this->primeros4;
}
int cTelefonoNum::GET_ULT()
{
	return this->ultimos4;
}
string 	cTelefonoNum::to_string()
{
	return (caracteristica+"-" + primeros4 + ultimos4);
}
void cTelefonoNum::set_carac(int caract)
{
	this->caracteristica = caract;
	return;
}

ostream& operator<<(ostream& out, cTelefonoNum& objetos)
{
	out << objetos.caracteristica << "" << objetos.duenio <<""<<objetos.primeros4<<""<<objetos.ultimos4 << endl;
	return out;
}
istream& operator>>(istream& in, cTelefonoNum& objeto)
{
	int caract;  
	in >> caract;
	objeto.caracteristica = caract;
	in >> caract;
	objeto.primeros4 = caract;
	in >> caract;
	objeto.ultimos4 = caract;
	return in;
}
