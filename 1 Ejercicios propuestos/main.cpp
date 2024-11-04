// main.cpp
#include <iostream>
#include "eje1/eje1.h"
#include "eje2/eje2.h"
#include "eje3/eje3.h"
#include "eje4/eje4.h"
#include "eje5/eje5.h"
#include "eje6/eje6.h"
#include "eje7/eje7.h"
#include "eje8/eje8.h"
#include "eje9/eje9.h"

using namespace std;

int main() {
    int opcion;
    cout << "Introduce el número del ejercicio que quieres ejecutar del 1 al 9" << endl;
    cin >> opcion;

    switch (opcion) {
        case 1:
            eje1();
            break;
        case 2:
            eje2();
            break;
        case 3:
            eje3();
            break;
        case 4:
            eje4();
            break;
        case 5:
            eje5();
            break;
        case 6:
            eje6();
            break;
        case 7:
            eje7();
            break;
        case 8:
            eje8();
            break;
        case 9:
            eje9();
            break;
        default:
            cout << "Opción no válida" << endl;
            break;
    }

    return 0;
}