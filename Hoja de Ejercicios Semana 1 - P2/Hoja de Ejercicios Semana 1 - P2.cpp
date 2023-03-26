#include "pch.h"
#include "Persona.h"

using namespace System;

int main()
{
    setlocale(LC_ALL, "");
    //Ingreso de datos
    string nombre; int edad; char sexo; float peso; float altura;
    int peso_ideal[3];
    bool mayor_de_edad[3];
    cout << "Ingrese el nombre:"; cin >> nombre;
    cout << "Ingrese la edad: "; cin >> edad;
    cout << "Ingrese el sexo: "; cin >> sexo;
    cout << "Ingrese el peso: "; cin >> peso;
    cout << "Ingrese la altura: "; cin >> altura;
    //Creación de los objetos con sus distintos constructores
    Persona* P1 = new Persona(nombre, edad, sexo, peso, altura);
    Persona* P2 = new Persona(nombre, edad, sexo);
    Persona* P3 = new Persona();
    //Setteo de adtos para el tercer objeto
    P3->setAltura(172);
    P3->setEdad(21);
    P3->setNombre("Jair");
    P3->setPeso(62);
    P3->setSexo('M');
    //Generación de DNI's por cada objeto
    P1->generaDNI();
    P2->generaDNI();
    P3->generaDNI();
    //PesoIdeal
    peso_ideal[0] = P1->IMC();
    peso_ideal[1] = P2->IMC();
    peso_ideal[2] = P3->IMC();
    //Mayor de edad
    mayor_de_edad[0] = P1->esMayorDeEdad();
    mayor_de_edad[1] = P2->esMayorDeEdad();
    mayor_de_edad[2] = P3->esMayorDeEdad();
    cout << endl << endl;
    P1->toString();
    switch (peso_ideal[0])
    {
    case -1:
        cout << "Esta en su peso ideal" << endl;
        break;
    case 0:
        cout << "Esta por debajo de su peso ideal" << endl;
        break;
    case 1:
        cout << "Esta con sobrepeso" << endl;
        break;
    }
    if (mayor_de_edad[0] == true)
    {
        cout << "Es mayor de edad" << endl;
    }
    else
    {
        cout << "Es menor de edad" << endl;
    }
    cout << endl;
    P2->toString();
    switch (peso_ideal[1])
    {
    case -1:
        cout << "Esta en su peso ideal" << endl;
        break;
    case 0:
        cout << "Esta por debajo de su peso ideal" << endl;
        break;
    case 1:
        cout << "Esta con sobrepeso" << endl;
        break;
    }
    if (mayor_de_edad[1] == true)
    {
        cout << "Es mayor de edad" << endl;
    }
    else
    {
        cout << "Es menor de edad" << endl;
    }
    cout << endl;
    P3->toString();
    switch (peso_ideal[2])
    {
    case -1:
        cout << "Esta en su peso ideal" << endl;
        break;
    case 0:
        cout << "Esta por debajo de su peso ideal" << endl;
        break;
    case 1:
        cout << "Esta con sobrepeso" << endl;
        break;
    }
    if (mayor_de_edad[2] == true)
    {
        cout << "Es mayor de edad" << endl;
    }
    else
    {
        cout << "Es menor de edad" << endl;
    }
}
