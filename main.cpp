#include <iostream>
#include "cube.h"

int main()
{
    Cube* rubik = new Cube();

    rubik->F();
    rubik->L();
    //rubik->B_back();
    rubik->F_back();
    rubik->L();
    rubik->B();
    rubik->L_back();
    rubik->F_back();
    rubik->B_back();
    //rubik->L_back();
    rubik->printCube();
    
} 