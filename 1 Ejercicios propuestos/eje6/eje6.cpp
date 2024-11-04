#include "eje6.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void eje6()
{
    //6.- Escribir un programa que calcule la longitud de la hipotenusa de un triángulo rectángulo, utilizando el teorema de Pitágoras.
    cout << "Introduce los catetos del triángulo rectángulo" << endl;
    double cateto1;
    double cateto2;
    cin >> cateto1;
    cin >> cateto2;
    double hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
    cout << "La hipotenusa es " <<hipotenusa << endl;
}