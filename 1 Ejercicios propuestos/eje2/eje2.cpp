#include "eje2.h"
#include <iostream>
#include <string>
using namespace std;
void eje2() {
//2.- Escribe un programa que pida tres números y muestre la media aritmética de esos tres números.
int numero;
int numero2;
int numero3;
cout << "Introduce tres números" << endl;
cin >> numero;
cin >> numero2;
cin >> numero3;
cout << "la media es " <<(numero + numero2 + numero3) / 3 << endl;
}