#include "pch.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <wchar.h>

using namespace System;
using namespace std;

class Cuenta
{
private:
	string titular;
	float cantidad;

public:
	//Constructores y destructores
	Cuenta() { this->cantidad = 0; this->titular = "NULL" ; };
	Cuenta(string titular, float cantidad) { this->cantidad = cantidad; this->titular = titular; }
	~Cuenta() {};
	//Setters y getters
	void setTitular(string titu) { this->titular = titu; }
	string getTitular() { return (this->titular); }
	void setCantidad(float canti) { this->cantidad = canti; }
	float getCantidad() { return (this->cantidad); }
	//Metodos especiales
	void Ingresar(double cantida) 
	{
		if (cantidad >= 0)
		{
			this->cantidad += cantida;
		}
		else {
			this->cantidad ;
		}
	}
	void Retirar(double cantidad)
	{
		if (this->cantidad - cantidad < 0)
		{
			this->cantidad = 0;
		}
		else
		{
			this->cantidad -= cantidad;
		}
	}
};

int main()
{
	Cuenta* Usuario1 = new Cuenta();
	string titu;
	bool interruptor = true;
	cout << "Ingrese el titular de la cuenta: "; cin >> titu;
	Usuario1->setTitular(titu);
	srand(time(NULL));
	int num = 250 + rand()%(801-250);
	Usuario1->setCantidad(num);
	float deposito = 0;
	float retiro = 0;
	cout << "Bienvenido al cajero del Banco Oris cliente " << titu << " a continuación tiene las opciones del cajero:" << endl;
	while (interruptor)
	{
		int decision = 0;
		cout << "1. Deposito" << endl;
		cout << "2. Retiro" << endl;
		cout << "3. Ver mi saldo actual" << endl;
		cout << "4. Salir" << endl;
		cin >> decision;
		switch (decision)
		{
		case 1:
			system("cls");
			cout << "Ingrese la cantidad a depositar: ";  cin >> deposito;
			Usuario1->Ingresar(deposito);
			break;
		case 2:
			system("cls");
			cout << "Ingrese la cantidad a retirar: "; cin >> retiro;
			Usuario1->Retirar(retiro);
			break;
		case 3:
			system("cls");
			cout << "El usuario " << titu << " tiene de saldo: " << Usuario1->getCantidad() << endl;
			break;
		case 4:
			cout << "Gracias por visitar el Banco Oris :)" << endl;
			interruptor = false;
			break;
		}
	}






    return 0;
}
