#ifndef CENTROG_TRIANGULO_H
#define CENTROG_TRIANGULO_H

#include "Figura.h"

class Triangulo: public Figura{
private:
    float base, altura;
public:
    Triangulo(int signo, float x, float y, float base, float altura);
    float calcularArea();
    void SetB(float base);
    void setA(float altura);
    float getB();
    float getA();
};

#endif //CENTROG_TRIANGULO_H
