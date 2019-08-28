#ifndef CENTROG_RECTANGULO_H
#define CENTROG_RECTANGULO_H

#include "Triangulo.h"

class Rectangulo: public Triangulo{
public:
    Rectangulo(int signo, float x, float y, float base, float altura);
    float calcularArea();
};

#endif //CENTROG_RECTANGULO_H
