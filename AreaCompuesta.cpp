//
// Created by Eduardo Medina on 22/08/2019.
//

#include "AreaCompuesta.h"

void AreaCompuesta::calculoCentroide(int figuras) {
    int respuesta; int aux = 0;
    int aux2; aux2 = figuras;
    float base, radio, altura,x,y;
    int signo;
    Figura* F1[figuras];
    do{
        if(figuras ==  0){
            continue;
        }
        else{
            cout <<"Desea ingresar un circulo? Escriba 1 si la respuesta es si y 0 si la respuesta es no" << endl;
            cin >> respuesta;
            if(respuesta == 1){
                cout <<"Ingrese los siguiente datos: " << endl;
                cout <<"Radio: "; cin >>radio;
                cout <<"Coordenada en x: "; cin >> x;
                cout <<"Coordenada en y: "; cin >> y;
                cout <<"Si la figura es parte de la imagen coloque un 1 de lo contrario coloque -1: "; cin >> signo;
                F1[aux] = new Circulo(signo,x,y,radio);
                figuras--;
                aux++;
            }
        }
        if(figuras == 0){
            continue;
        }
        else{
            cout <<"Desea ingresar un rectangulo? Escriba 1 si la respuesta es si y 0 si la respuesta es no" << endl;
            cin >> respuesta;
            if(respuesta == 1){
                cout <<"Ingrese los siguiente datos: " << endl;
                cout <<"Base: "; cin >>base;
                cout <<"Altura: "; cin >>altura;
                cout <<"Coordenada en x: "; cin >> x;
                cout <<"Coordenada en y: "; cin >> y;
                cout <<"Si la figura es parte de la imagen coloque un 1 de lo contrario coloque -1: "; cin >> signo;
                F1[aux] = new Rectangulo(signo,x,y,base,altura);
                figuras--;
                aux++;
            }
        }
        if(figuras == 0){
            continue;
        }
        else{
            cout <<"Desea ingresar un triangulo? Escriba 1 si la respuesta es si y 0 si la respuesta es no" << endl;
            cin >>respuesta;
            if(respuesta==1){
                cout <<"Ingrese los siguiente datos: " << endl;
                cout <<"Base: "; cin >>base;
                cout <<"Altura: "; cin >>altura;
                cout <<"Coordenada en x: "; cin >> x;
                cout <<"Coordenada en y: "; cin >> y;
                cout <<"Si la figura es parte de la imagen coloque un 1 de lo contrario coloque -1: "; cin >> signo;
                F1[aux] = new Triangulo(signo,x,y,base,altura);
                figuras--;
                aux++;
            }
        }
    }while(figuras >0);
    float area_total = 0;
    for(int i  = 0; i < aux2; i++){
        if(F1[i]->getS() > 0){
            area_total +=F1[i]->calcularArea();
        }
        else{
            area_total -=F1[i]->calcularArea();
        }
    }
    float sumatoria_areasporx = 0;
    for(int i = 0; i < aux2; i++){
        if(F1[i]->getS() > 0){
            sumatoria_areasporx += F1[i]->calcularArea()*F1[i]->getX();
        }
        else{
            sumatoria_areasporx -= F1[i]->calcularArea()*F1[i]->getX();
        }
    }
    cout <<"Calculo del centro de gravedad en X: ";
    cout << sumatoria_areasporx/area_total << endl;
    float sumatoria_areaspory = 0;
    for(int i = 0; i < aux2; i++){
        if(F1[i]->getS() > 0){
            sumatoria_areaspory += F1[i]->calcularArea()*F1[i]->getY();
        }
        else{
            sumatoria_areaspory -= F1[i]->calcularArea()*F1[i]->getY();
        }
    }
    cout <<"Calculo del centro de gravedad en Y: ";
    cout << sumatoria_areaspory/area_total << endl;
}
