
#include "Rectangulo.h"

Rectangulo::Rectangulo(int signo, float x, float y, float base, float altura) : Triangulo(signo, x, y, base, altura) {
}

float Rectangulo::calcularArea() {
    return getB()*getA();
}
