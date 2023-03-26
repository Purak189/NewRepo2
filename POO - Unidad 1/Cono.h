#pragma once
#ifndef CONO_H
#define CONO_H
#include <cmath>

class Cono
{
private:
	using tipo_numero = int;
	tipo_numero radio;
	tipo_numero altura;

public:
	//Constructores y Destructores
	Cono() { this->radio = 0; this->altura = 0; };
	Cono(tipo_numero radio, tipo_numero altura) { this->altura = altura; this->radio = radio; };
	~Cono() {};
	//Metodos setter y getter
	void setRadioAltura(tipo_numero rad, tipo_numero alt) { this->altura = alt; this->radio = rad; }
	tipo_numero getRadio() { return (this->radio); }
	tipo_numero getAltura() { return (this->altura); }
	//Metodos de servicio
	float volumen() { return ((pow((this->radio), 2) * (this->altura) * 3.14) / 3); }
};
#endif // !Cono_H
