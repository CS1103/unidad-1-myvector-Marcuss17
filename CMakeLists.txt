cmake_minimum_required(VERSION 3.14)
project(CentroG)

set(CMAKE_CXX_STANDARD 14)

add_executable(CentroG main.cpp Centroide.h Centroide.cpp Figura.h Figura.cpp Circulo.h Circulo.cpp Triangulo.h Triangulo.cpp Rectangulo.h Rectangulo.cpp AreaCompuesta.h AreaCompuesta.cpp)