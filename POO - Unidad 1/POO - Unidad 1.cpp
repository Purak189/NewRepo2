#include "pch.h"
#include "Cubo.h"
#include "Cilindro.h"
#include "Cono.h"
#include "Esfera.h"
#include <iostream>

using namespace std;

int main() {
	// Creacion del objeto Cubo en 2 metodos
	Cubo* c1;
	c1 = new Cubo();
	c1->setLado(50);

	Cubo* c2 = new Cubo(20);
	// Escritura de los datos internos
	cout << "Datos del cubo 1: " << endl;
	cout << "Lado: " << c1->getLado() << endl;
	cout << "Volumen: " << c1->volumen() << endl;
	cout << endl;
	cout << "Datos del cubo 2: " << endl;
	cout << "Lado: " << c2->getLado() << endl;
	cout << "Volumen: " << c2->volumen() << endl;
	cout << endl;

	//Creación del Objeto Cilindro en 2 metodos
	Cilindro* C1;
	C1 = new Cilindro();
	C1->setRadioAltura(5, 15);

	Cilindro* C2 = new Cilindro(4, 12);
	//Escritura de los datos internos
	cout << "Datos del cilindro 1: " << endl;
	cout << "Radio: " << C1->getRadio() << endl;
	cout << "Altura: " << C1->getAltura() << endl;
	cout << "Volumen: " << C1->volumen() << endl;
	cout << endl;
	cout << "Datos del cilindro 2: " << endl;
	cout << "Radio: " << C2->getRadio() << endl;
	cout << "Altura: " << C2->getAltura() << endl;
	cout << "Volumen: " << C2->volumen() << endl;
	cout << endl;

	//Creación del Objeto Cono en 2 metodos
	Cono* CO1;
	CO1 = new Cono();
	CO1->setRadioAltura(8, 12);

	Cono* CO2 = new Cono(6, 15);
	//Escritura de los datos internos
	cout << "Datos del cono 1: " << endl;
	cout << "Radio: " << CO1->getRadio() << endl;
	cout << "Altura: " << CO1->getAltura() << endl;
	cout << "Volumen: " << CO1->volumen() << endl;
	cout << endl;
	cout << "Datos del cono 2: " << endl;
	cout << "Radio: " << CO2->getRadio() << endl;
	cout << "Altura: " << CO2->getAltura() << endl;
	cout << "Volumen: " << CO2->volumen() << endl;
	cout << endl;

	//Declaraciòn de la variable
	Esfera* f;
	//Creacion del objeto: constructor
	f = new Esfera(10);

	//Declaración y creación de un objeto
	Esfera* f1 = new Esfera();
	//Uso de los métodos de servicio
	f1->setRadio(15);
	cout << "Esfera1: " << f->area() << endl;
	cout << "Esfera2: " << f1->volumen();

	return 0;
}