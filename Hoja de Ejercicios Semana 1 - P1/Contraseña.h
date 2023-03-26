#pragma once
#include <iostream>
#include <wchar.h>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

class Contrase�a {
private:
	int longitud = 8;
	string contrase�a;
public:
	Contrase�a();
	Contrase�a(int longi);
	~Contrase�a();
	bool esSeguro();
	void generarContrase�a();
	void setLongitud(int longi);
	int getLongitud();
	string getContrase�a();
};

Contrase�a::Contrase�a()
{
	this->contrase�a = "";
}
Contrase�a::Contrase�a(int longi)
{
	this->longitud = longi; this->contrase�a = "";
}
void Contrase�a::generarContrase�a()
{
	contrase�a = "";
	for (int i = 0; i < this->longitud; i++)
	{
		char c = 'A';
		int tipo = rand() % 3;
		if (tipo == 0)
		{
			c = 'A' + rand() % 26;
		}
		else if (tipo == 1)
		{
			c = 'a' + rand() % 26;
		}
		else if (tipo == 2)
		{
			c = '0' + rand() % 10;
		}
		this->contrase�a += c;
	}
}
string Contrase�a::getContrase�a()
{
	return this->contrase�a;
}
void Contrase�a::setLongitud(int longi)
{
	this->longitud = longi;
}
int Contrase�a::getLongitud()
{
	return this->longitud;
}
bool Contrase�a::esSeguro()
{
	int mayus=0, minus=0, num=0;
	for (int i = 0; i < this->longitud; i++)
	{
		if (this->contrase�a[i] >= 'A' && this->contrase�a[i] <= 'Z')
		{
			mayus++;
		}
		else if (this->contrase�a[i] >= 'a' && this->contrase�a[i] <= 'z')
		{
			minus++;
		}
		else
		{
			num++;
		}
	}
	bool boolean = true;
	if (mayus >= 2 && minus >= 1 && num >=5)
	{
		return boolean;
	}
	else
	{
		boolean = false;
		return boolean;
	}
}

