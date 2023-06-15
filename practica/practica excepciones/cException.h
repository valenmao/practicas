#pragma once
#include <exception>

using namespace std;
class cException: public exception
{
	const char* what() const throw();

};

