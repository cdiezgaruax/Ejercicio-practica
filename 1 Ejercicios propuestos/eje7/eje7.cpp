#include "eje7.h"
#include <iostream>
#include <string>

using namespace std;
void eje7()
{
  //7.- Escribir un programa que resuelva ecuaciones de primer grado de la forma Ax+B=C. Los valores de A, B y C se introducen por teclado
  cout << "Introduce los valores de A, B y C para resolver Ax+B=C" << endl;
  double A;
  double B;
  double C;
  cin >> A;
  cin>> B;
  cin >> C;
  double x = (C - B) / A;
  cout << "El valor de x es " << x << endl;
}