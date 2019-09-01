#include <iostream>
#include <cassert>
#include "Vector.h"

using std::cout;
using std::endl;
using std:: cin;
using namespace UTEC;

int main() {
    /*FOR THE ASSERTS:
    v1 size = 3; v2 size =2;
     v1 elements [1,2,3]
     v2 elements [1,2]
     */
    int numElementsV1, numElementsV2, addedNumber, lastElementAfterPop, positionOutOfRange,positionToAddV2, valueToAddV2, positionToEraseV1;
    int lastElementAfterErase, positionToPrintV2, firstPosV1, firstPosV2;

    cout <<"Enter size for the first vector: "; cin >> numElementsV1;
    cout <<"Enter size for the second vector: "; cin >> numElementsV2;
    cout <<"Fill the first vector: \n";
    Vector v1(numElementsV1);
    v1.fillVector();
    cout <<"Fill the second vector: \n";
    Vector v2(numElementsV2);
    v2.fillVector();

    //Assert v.size
    v1.size();
    assert(v1.size()==numElementsV1);
    //

    //Assert v.push_back
    cout <<"Enter a number you wish to add to the vector number 1: "; cin >> addedNumber; // addedNumber = 4;
    v1.push_back(addedNumber);
    assert(v1[v1.getNumElements()-1] == addedNumber);
    //

    //Assert v.pop_back
    lastElementAfterPop = v2[v2.getNumElements()-2]; //MAKE SURE TO ENTER AN ARRAY OF MORE THAN 2 FOR THIS ASSERT TO CHECK CORRECTLY.
    v2.pop_back();
    assert(lastElementAfterPop == v2[v2.getNumElements()-1]);
    //

    //Exception for insertion pos out of range
    cout << "\nTrying to insert an element to a position out of range: \n";
    positionOutOfRange = numElementsV1;
    v2.insert(positionOutOfRange,5);
    cout << endl;
    //

    //Assert v.insert. Consider you have already done a pop_back to v2
    cout <<"Enter a position you wish to add a number to vector 2: "; cin >> positionToAddV2; //positiontoAddV2 = 0
    cout <<"Enter the value you wish to add: "; cin >> valueToAddV2; //valueToAddV2 = 0
    v2.insert(positionToAddV2,valueToAddV2);
    assert(v2[positionToAddV2] == valueToAddV2);
    //

    //Assert v.erase. Consider you have already done a push_back to v1.
    lastElementAfterErase = v1[v1.getNumElements()-1];
    cout <<"Enter a position you wish to erase from vector 1: "; cin >> positionToEraseV1; //positionToEraseV1 = 2
    v1.erase(positionToEraseV1);
    assert(v1[positionToEraseV1 == lastElementAfterErase]);
    //


    //Assert overloading of []. positionToPrintV2 = 0. THIS ASSERTION WILL ONLY WORK IF ALL THE COMMENTS HAVE BEING TAKEN INTO CONSIDERATION.
    positionToPrintV2 = 0;
    assert(v2[positionToPrintV2] == 0);
    //

    //Assert overloading of +.
    firstPosV1 = 0;
    firstPosV2 = firstPosV1;
    Vector v3 = v1+v2;
    assert(v1[firstPosV1] == v3[0]);
    assert(v2[firstPosV2] == v3[v1.getNumElements()]);
    //

    cout <<"Vector 1: "; v1.printVector(); cout << endl;
    cout <<"Vector 2: "; v2.printVector(); cout << endl;
    cout <<"Sum of v1 and v2, v3: "; v3.printVector(); cout << endl;

    return 0;
}