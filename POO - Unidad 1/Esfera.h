#pragma once
#ifndef ESFERA_H
#define ESFERA_H
#include <iostream>

using namespace std;

class Esfera
{
private:
	int radio;

public:
	//Constructores sobrecargados
	Esfera() { this->radio = 0; }
	Esfera(int radio) { this->radio = radio; }
	//Destructor vacio
	~Esfera() {};
	//métodos de servicio, responsabilidades
	void setRadio(int radio) { this->radio = radio; }
	int getRadio() { return (this->radio); }
	double area() { return radio * 3.14 * 3; }
	double volumen() { return (radio * 3.14 * 4) / 3; }
};
#endif