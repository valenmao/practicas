#pragma once
#include <list>
#include "cTelefonoNum.h"
using namespace std;

template <class T>
class cList: public list<T*> {
public:
	//sobrecargas

	void operator+(T&);
	T operator[](int);
	T operator[](T&);
};

template <class T>
inline void cList<T> ::operator+(T &element)
{
	this->push_back(&element);
}

template <class T>
inline T cList<T>::operator[](int pos)
{
	T aux;
	int cont = 0;
	for (T t : this)
	{
		if (cont == pos)
			aux=t;
		cont++;
	}

	return aux;
}

template <class T>
inline T cList<T>:: operator[](T &element)
{
	for (T t : this)
	{
		if (t == element)
			return t;
	}
}
