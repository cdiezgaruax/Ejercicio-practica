#include "eje4.h"
#include <iostream>


using namespace std;

void eje4() {

    double base, altura;
    cout << "Introduce la longitud del rectángulo: ";
    cin >> base;
    cout << "Introduce el ancho del rectángulo: ";
    cin >> altura;

    double area = base * altura;
    cout << "El área del rectángulo es: " << area << endl;
}