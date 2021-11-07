#include <iostream>
#include "cube.h"

int main()
{
    Cube* rubik = new Cube();

    rubik->F();
    rubik->B();
    rubik->L();
    rubik->R();
    rubik->U();
    rubik->D();
    rubik->L_back();
    rubik->R_back();
    rubik->printCube();
    
} 