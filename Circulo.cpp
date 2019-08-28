#include "Circulo.h"

Circulo::Circulo(int signo, float x, float y, float radio) : Figura(signo,x,y){
    this-> radio = radio;
}

float Circulo::calcularArea() {
    return (pi*radio*radio);
}

void Circulo::setR(float radio) {
    this-> radio = radio;
}

float Circulo::getR() {
    return radio;
}
