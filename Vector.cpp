#include "Vector.h"
#include <iostream>

using namespace UTEC;

using std::cout;
using std::cin;
using std::endl;

Vector::Vector(int numElements) {
    this-> numElements = numElements;
    pointer = new int[numElements];
}

UTEC::Vector::Vector(const Vector& vec)
{
	pointer = new int[vec.numElements];
	for (int i = 0; i < vec.numElements; ++i)
		pointer[i] = vec.pointer[i];
}

Vector UTEC::Vector::operator=(const Vector& vec)
{
	if (pointer != nullptr)
		delete[] pointer;
	pointer = new int[vec.numElements];
	for (int i = 0; i < vec.numElements; ++i)
		pointer[i] = vec.pointer[i];
	return *this;
}


// ERROR: En tipo de retorno, cual es el valor previsto? // He asumido un valor arbitrario de Cero (0)
int Vector::fillVector() {
    for(int i = 0; i < numElements; i++){
        cout << "Enter element " << i << ": "; cin >> pointer[i];
    }
	return 0;
}

void Vector::push_back(int elemento) {
    int* v = new int[numElements+1];
    for(int i = 0; i < numElements; i++){
        v[i] = pointer[i];
    }
    v[numElements] = elemento;
    numElements +=1;
    delete[] pointer;
    pointer = v;
}

void Vector::printVector() {
    for(int i = 0; i < numElements; i++){
        cout << pointer[i] << "   ";
    }
    cout << endl;
}

void Vector::pop_back() {
    int* v = new int[numElements-1];
    for(int i = 0; i < numElements; i++){
        v[i] = pointer[i];
    }
    numElements -= 1;
    delete[] pointer;
    pointer = v;
}

int Vector::size() {
    return numElements;
}

void Vector::insert(int position, int item) {
    //try {
    if(position >= numElements){
		//throw 1;
		throw std::runtime_error("Out of Range");
	}
    int aux; // ¿Por qué esta variable?
    
	// ERROR: No es claro la razon de este codigo
	int* v = new int[numElements+1];
    for(int i = 0; i < numElements;i++){
        v[i] = pointer[i];
    }
	numElements++;
	delete[] pointer;
	pointer = v;

	//numElements +=1;

	// No se ve correcto, tendria que explicar que se intento hacer en esta parte
	//numElements++;
	//delete[] pointer;
 //   aux = v[position];
 //   v[position] = item;
 //   v[position+1] = aux;
 //   pointer = v;
	//}catch(int x){
    //    cout <<"The position you tried to reach is out of range." << endl;
    //}
}

void Vector::erase(int position) {
	//// ERROR: P

 //   int* v = new int[numElements-1];
 //   for(int i = 0; i < numElements-1;i++){
 //       v[i] = pointer[i];
 //   }
 //   if(position == numElements-1){
 //       numElements -=1;
 //       delete[] pointer;
 //       pointer = v;
 //   }
 //   else{
 //       numElements -=1;
 //       v[position] = pointer[position+1];
 //       delete[] pointer;
 //       pointer = v;
 //   }
}

int Vector::operator[](int i) {
    return pointer[i];
}

Vector Vector::operator+(const Vector& v2) {
    int numElementsNewVec = numElements + v2.numElements;
    Vector v3(numElementsNewVec);
    int aux = 0;
    for(int i = 0; i < numElementsNewVec; i++){
        if(i < numElements){
            v3.pointer[i] = pointer[i];
        }
        else{
            v3.pointer[i] = v2.pointer[aux];
            aux++;
        }
    }
    return v3;
}

int Vector::getNumElements() {
    return numElements;
}
