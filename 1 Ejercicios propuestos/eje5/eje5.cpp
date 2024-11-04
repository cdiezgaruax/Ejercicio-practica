#include "eje5.h"
#include <iostream>
#include <string>
using namespace std;

void eje5() {
//5.- Escribir un programa que lea a través del teclado dos cadenas de caracteres y muestre como resultado si ambas cadenas son iguales o no lo son.
string cadena1;
string cadena2;
cout << "Introduce dos cadenas de caracteres" << endl;
cin >> cadena1;
cin >> cadena2;
if (cadena1 == cadena2) {
    cout << "Las cadenas son iguales" << endl;
} else {
    cout << "Las cadenas no son iguales" << endl;
}
}