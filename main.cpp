#include <iostream>
#include "AreaCompuesta.h"
#include "Triangulo.h"
#include "Rectangulo.h"
#include "Circulo.h"

using namespace std;

int main() {
    int cantidad_figuras;
    cout <<"Ingrese la cantidad de figuras que tendra su area compuesta: "; cin >> cantidad_figuras;
    AreaCompuesta* A1 = new AreaCompuesta();
    A1->calculoCentroide(cantidad_figuras);

    return 0;
}