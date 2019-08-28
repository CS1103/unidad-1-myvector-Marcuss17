#ifndef CENTROG_CENTROIDE_H
#define CENTROG_CENTROIDE_H

class Centroide{
private:
    float x, y;
public:
    Centroide(float x, float y);
    Centroide(){};
    void setX(float x);
    void setY(float y);
    float getX();
    float getY();
};

#endif //CENTROG_CENTROIDE_H
