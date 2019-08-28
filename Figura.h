#ifndef CENTROG_FIGURA_H
#define CENTROG_FIGURA_H

#include "Centroide.h"

class Figura {
private:
    int signo;
    Centroide centroide;
public:
    Figura(int signo, float x, float y);
    Figura(){};
    virtual float calcularArea() = 0;
    int getS();
    float getX();
    float getY();
    ~Figura();

};


#endif //CENTROG_FIGURA_H
