#include <iostream>
#include "cube.h"

int main()
{
    Cube* rubik = new Cube();

    rubik->F();
    //rubik->F_back();
    rubik->B();
    //rubik->B_back();
    //rubik->L();
    //rubik->L(); rubik->L();
    //rubik->L_back();

    //cout << "next cube" << endl;
    //rubik->B();
    //rubik->printCube();
    //cout << "next cube" << endl;
    rubik->L();
    rubik->printCube();
} 