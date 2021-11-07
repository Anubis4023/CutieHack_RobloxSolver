#include <iostream>
#include "cube.h"

int main()
{
    Cube* rubik = new Cube();

    for (int i = 0; i < 3; ++i) {
    rubik->F(); //front
    rubik->B(); //back
    rubik->L(); //left
    rubik->R(); //right
    rubik->U(); //top
    rubik->D(); //bottom
    }
    rubik->printCube();
    
} 