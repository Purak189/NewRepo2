#include "pch.h"
#include "Contraseña.h"

using namespace System;

int main()
{
	srand(time(NULL));
	/*
	//Generación de contraseñas 
	int ran = 5 + rand() % 11-5;
	Contraseña* contraseñas = new Contraseña[ran];
	//Arreglo booleano para saber si la contraseña es fuerte o no
	bool* esFuerte = new bool[ran];
	//Generación de contraseñas
	for (int i = 0; i < ran; i++)
	{
		contraseñas[i].generarContraseña();
		esFuerte[i] = contraseñas[i].esSeguro();
	}
	
	//Mostrar contraseñas y si son fuertes o no
	for (int i = 0; i < ran; i++)
	{
		cout << contraseñas[i].getContraseña() << ": Fuerte: " << (esFuerte[i] ? "V" : "F") << endl;
	}

	delete[] contraseñas;
	delete[] esFuerte;
	*/
	//Generación del array de objetos
	Contraseña* contraseñas[8];
	//Arreglo de bools
	bool* esFuerte = new bool[8];

	for (int i = 0; i < 8; i++)
	{
		contraseñas[i] = new Contraseña(12);
		contraseñas[i]->generarContraseña();
		esFuerte[i] = contraseñas[i]->esSeguro();
	}

	for (int i = 0; i < 8; i++)
	{
		cout << contraseñas[i]->getContraseña() << ": " << (esFuerte[i] ? "V" : "F") << endl; 
	}

	delete[] contraseñas;
	delete[] esFuerte;

	return 0;
}
