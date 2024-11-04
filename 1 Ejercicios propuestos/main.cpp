#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {






    //4.- Escribir un programa que calcule el área de un rectángulo, a partir de la longitud de los lados del rectángulo que introduce el usuario.
    int base;
    int altura;
    cout << "Introduce la base y la altura del rectángulo" << endl;
    cin >> base;
    cin >> altura;
    cout << "El área del rectángulo es " << base * altura << endl;

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

    //6.- Escribir un programa que calcule la longitud de la hipotenusa de un triángulo rectángulo, utilizando el teorema de Pitágoras.
    cout << "Introduce los catetos del triángulo rectángulo" << endl;
    double cateto1;
    double cateto2;
    cin >> cateto1;
    cin >> cateto2;
    double hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2);
    cout << "La hipotenusa es " <<hipotenusa << endl;

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

    //8.- Escribir un programa que calcule el precio final de un producto en euros (incluyendo el iva del 21%) a partir del precio del producto, que se introduce por teclado.
    cout << "Introduce el precio del producto sin IVA" << endl;
    double precio;
    cin >> precio;
    double iva = 0.21;
    cout << "El precio final del producto es " << precio * (1+iva) << endl;

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



    return 0;
}