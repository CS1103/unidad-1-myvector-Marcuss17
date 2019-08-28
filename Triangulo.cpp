//
// Created by Eduardo Medina on 22/08/2019.
//

#include "Triangulo.h"

Triangulo::Triangulo(int signo, float x, float y, float base, float altura) : Figura(signo,x,y){
    this->base = base;
    this->altura = altura;
}

float Triangulo::calcularArea() {
    return (0.5*base*altura);
}

void Triangulo::SetB(float base) {
    this->base = base;
}

void Triangulo::setA(float altura) {
    this->altura = altura;
}

float Triangulo::getB() {
    return base;
}

float Triangulo::getA() {
    return altura;
}
