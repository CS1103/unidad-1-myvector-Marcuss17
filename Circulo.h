#ifndef CENTROG_CIRCULO_H
#define CENTROG_CIRCULO_H

#include "Figura.h"

const float pi = 3.1415;

class Circulo: public Figura{
private:
    float radio;
public:
    Circulo(int signo, float x, float y, float radio);
    float calcularArea() override;
    void setR(float radio);
    float getR();
};


#endif //CENTROG_CIRCULO_H
