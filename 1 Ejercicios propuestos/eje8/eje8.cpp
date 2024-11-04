#include "eje8.h"
#include <iostream>

using namespace std;
void eje8()
{
   //8.- Escribir un programa que calcule el precio final de un producto en euros (incluyendo el iva del 21%) a partir del precio del producto, que se introduce por teclado.
   cout << "Introduce el precio del producto sin IVA" << endl;
   double precio;
   cin >> precio;
   double iva = 0.21;
   cout << "El precio final del producto es " << precio * (1+iva) << endl;
}