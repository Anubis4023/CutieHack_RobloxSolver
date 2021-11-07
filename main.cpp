#include <iostream>
#include "cube.h"

int main()
{
    Cube* rubik = new Cube();

    rubik->F();
    rubik->L();
    rubik->R();
    rubik->R();
    rubik->F_back();
    rubik->B_back();
    rubik->L_back();
    rubik->printCube();
    
} 