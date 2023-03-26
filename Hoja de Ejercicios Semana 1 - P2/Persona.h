#pragma once
#include <iostream>
#include <stdlib.h>
#include <wchar.h>
#include <cstdlib>

using namespace std;

class Persona
{
private:
	string nombre;
	int edad;
	long DNI;
	char sexo;
	float peso;
	float altura;

public:
	Persona();
	Persona(string nombre, int edad, char sexo);
	Persona(string nombre, int edad, char sexo, float peso, float altura);
	~Persona() {};
	void setNombre(string nombre);
	void setEdad(int edad);
	void setSexo(char Sexo);
	void setPeso(float peso);
	void setAltura(float altura);
	int IMC();
	bool esMayorDeEdad();
	void comprobarSexo(char sexo);
	void toString();
	long generaDNI();

};

Persona::Persona()
{
	this->setAltura(0); this->setEdad(0); this->setNombre("Anonimo");
	this->setPeso(0); this->setSexo('M'); 
}
Persona::Persona(string nombre, int edad, char sexo)
{
	this->setNombre(nombre); this->setEdad(edad); this->setSexo(sexo);
	this->setAltura(0); this->setPeso(0);
}
Persona::Persona(string nombre, int edad, char sexo, float peso, float altura)
{
	this->setNombre(nombre); this->setEdad(edad); this->setSexo(sexo);
	this->setPeso(peso); this->setAltura(altura);
}
void Persona::setNombre(string nombre) {this->nombre = nombre;}
void Persona::setEdad(int edad) { this->edad = edad; }
void Persona::setSexo(char Sexo) { this->sexo = Sexo; }
void Persona::setPeso(float peso) { this->peso = peso; }
void Persona::setAltura(float altura) { this->altura = altura; }
int Persona::IMC()
{
	float indice;
	indice = (this->peso) / (pow((this->altura), 2));
	if (indice < 20 && indice > 0)
	{
		return -1;
	}
	else if (indice >= 20 && indice <= 25)
	{
		return 0;
	}
	else if (indice > 25)
	{
		return 0;
	}
}
bool Persona::esMayorDeEdad()
{
	bool mayor_edad = false;
	if (this->edad >= 18)
	{
		mayor_edad = true;
	}
	return mayor_edad;
}
void Persona::comprobarSexo(char sexo)
{ 
	if (sexo != 'F' && sexo != 'M')
	{
		setSexo('F');
	}
}
void Persona::toString()
{
	cout << "Información de la persona con N° DNI: " << this->DNI << endl;
	cout << "Nombre: " << this->nombre << endl;
	cout << "Edad: " << this->edad << endl;
	cout << "Sexo: " << this->sexo << endl;
	cout << "Peso: " << this->peso << endl;
	cout << "Altura: " << this->altura << endl;
}
long Persona::generaDNI()
{
	this->DNI = 100000000 + rand() % (1000000000 - 100000000);
	return DNI;
}

