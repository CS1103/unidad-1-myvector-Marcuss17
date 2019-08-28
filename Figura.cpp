//
// Created by Eduardo Medina on 22/08/2019.
//

#include "Figura.h"

Figura::Figura(int signo, float x, float y) : centroide(x,y) {
    this-> signo =signo;
}

int Figura::getS() {
    return signo;
}

float Figura::getX() {
    return centroide.getX();
}

float Figura::getY() {
    return centroide.getY();
}

Figura::~Figura() {
}
