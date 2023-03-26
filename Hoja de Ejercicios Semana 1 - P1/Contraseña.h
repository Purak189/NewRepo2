#pragma once
#include <iostream>
#include <wchar.h>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

class Contraseña {
private:
	int longitud = 8;
	string contraseña;
public:
	Contraseña();
	Contraseña(int longi);
	~Contraseña();
	bool esSeguro();
	void generarContraseña();
	void setLongitud(int longi);
	int getLongitud();
	string getContraseña();
};

Contraseña::Contraseña()
{
	this->contraseña = "";
}
Contraseña::Contraseña(int longi)
{
	this->longitud = longi; this->contraseña = "";
}
void Contraseña::generarContraseña()
{
	contraseña = "";
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
		this->contraseña += c;
	}
}
string Contraseña::getContraseña()
{
	return this->contraseña;
}
void Contraseña::setLongitud(int longi)
{
	this->longitud = longi;
}
int Contraseña::getLongitud()
{
	return this->longitud;
}
bool Contraseña::esSeguro()
{
	int mayus=0, minus=0, num=0;
	for (int i = 0; i < this->longitud; i++)
	{
		if (this->contraseña[i] >= 'A' && this->contraseña[i] <= 'Z')
		{
			mayus++;
		}
		else if (this->contraseña[i] >= 'a' && this->contraseña[i] <= 'z')
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

