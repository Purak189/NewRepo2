#include "pch.h"
#include "Contrase�a.h"

using namespace System;

int main()
{
	srand(time(NULL));
	/*
	//Generaci�n de contrase�as 
	int ran = 5 + rand() % 11-5;
	Contrase�a* contrase�as = new Contrase�a[ran];
	//Arreglo booleano para saber si la contrase�a es fuerte o no
	bool* esFuerte = new bool[ran];
	//Generaci�n de contrase�as
	for (int i = 0; i < ran; i++)
	{
		contrase�as[i].generarContrase�a();
		esFuerte[i] = contrase�as[i].esSeguro();
	}
	
	//Mostrar contrase�as y si son fuertes o no
	for (int i = 0; i < ran; i++)
	{
		cout << contrase�as[i].getContrase�a() << ": Fuerte: " << (esFuerte[i] ? "V" : "F") << endl;
	}

	delete[] contrase�as;
	delete[] esFuerte;
	*/
	//Generaci�n del array de objetos
	Contrase�a* contrase�as[8];
	//Arreglo de bools
	bool* esFuerte = new bool[8];

	for (int i = 0; i < 8; i++)
	{
		contrase�as[i] = new Contrase�a(12);
		contrase�as[i]->generarContrase�a();
		esFuerte[i] = contrase�as[i]->esSeguro();
	}

	for (int i = 0; i < 8; i++)
	{
		cout << contrase�as[i]->getContrase�a() << ": " << (esFuerte[i] ? "V" : "F") << endl; 
	}

	delete[] contrase�as;
	delete[] esFuerte;

	return 0;
}
