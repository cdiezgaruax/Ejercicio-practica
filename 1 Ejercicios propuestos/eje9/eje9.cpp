#include "eje9.h"
#include <iostream>
#include <string>

using namespace std;
void eje9()
{
    //9.- Escribir un programa que simule una calculadora sencilla. El programa pedirá dos números y calculará la suma, la resta, la multiplicación y la división de ambos.
    cout << "Introduce dos números" << endl;
    double num1;
    double num2;
    cin >> num1;
    cin >> num2;
    cout << "La suma de los números es " << num1 + num2 << endl;
    cout << "La resta de los números es " << num1 - num2 << endl;
    cout << "La multiplicación de los números es " << num1 * num2 << endl;
    cout << "La división de los números es " << num1 / num2 << endl;
}