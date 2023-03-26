#pragma once
#ifndef _CUBO_H_
#define _CUBO_H_
#include <cmath>

class Cubo {
private:
	double lado;

public:
	// Constructor y Destructor
	Cubo() { this->lado = 0; }
	Cubo(double lado) { this->lado = lado; }
	~Cubo() {}
	// Metodos Setter/Getter
	void setLado(double lad) { lado = lad; }
	double getLado() { return (this->lado); }
	// Metodos de servicio
	double volumen() { return (pow(this->lado, 3)); }
};
#endif