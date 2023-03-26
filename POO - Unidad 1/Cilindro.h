#pragma once
#ifndef CILINDRO_H
#define CILINDRO_H
#include <cmath>

class Cilindro{
private:
	int radio;
	int altura;

public:
	//Constructor y Destructor
	Cilindro() { this->altura = 0; this->radio = 0; }
	Cilindro(int radio, int altura) { this->altura = altura; this->radio = radio; }
	~Cilindro(){}
	//Metodo setter, getter
	void setRadioAltura(int rad, int alt) { radio = rad; altura = alt; }
	int getRadio() { return (this->radio); }
	int getAltura() { return (this->altura); }
	//Metodos de servicio
	double volumen() { return ((pow(this->radio, 3) * 3.14) * (this->altura)); }
};
#endif