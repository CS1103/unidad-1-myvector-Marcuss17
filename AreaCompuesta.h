#ifndef CENTROG_AREACOMPUESTA_H
#define CENTROG_AREACOMPUESTA_H

#include "Figura.h"
#include "Triangulo.h"
#include "Rectangulo.h"
#include "Circulo.h"
#include <iostream>
using namespace std;

class AreaCompuesta{
public:
    AreaCompuesta(){};
    void calculoCentroide(int figuras);
};


#endif //CENTROG_AREACOMPUESTA_H
