#include "cube.h"

Cube::Cube() {
    vector<char> yellow = {'Y', 'Y', 'Y'};
    vector<char> white = {'W', 'W', 'W'};
    vector<char> blue  = {'B', 'B', 'B'};
    vector<char> red = {'R', 'R', 'R'};
    vector<char> green = {'G', 'G', 'G'};
    vector<char> orange = {'O', 'O', 'O'};

    top = {yellow, yellow, yellow};
    bot = {white, white, white};
    front = {blue, blue, blue};
    left = {orange, orange, orange};
    back = {green, green, green};
    right = {red, red, red};
    
}

void Cube::CubeScrambled(Cube* cube) {
    //FIXME: use a proper random cube format
    cube->front = { {'Y', 'B', 'G'}, 
                    {'Y', 'B', 'G'},
                    {'G', 'G', 'G'}};
    
    cube->left = { {'Y', 'B', 'G'}, 
                   {'Y', 'B', 'G'},
                   {'G', 'G', 'G'}};

    cube->back = { {'Y', 'B', 'G'}, 
                   {'Y', 'B', 'G'},
                   {'G', 'G', 'G'}};
    
    cube->right = { {'Y', 'B', 'G'}, 
                    {'Y', 'B', 'G'},
                    {'G', 'G', 'G'}};
    
    cube->top = { {'Y', 'B', 'G'}, 
                  {'Y', 'B', 'G'},
                  {'G', 'G', 'G'}};

    cube->bot = { {'Y', 'B', 'G'}, 
                  {'Y', 'B', 'G'},
                  {'G', 'G', 'G'}};
    
}

void Cube::printCube() {
    //TODO: bunch of for loops to print out the cube
    printFront();
    printLeft();
    printBack();
    printRight();
    printTop();
    printBot();
    return;
}

void Cube::printFront () {
    cout << "Printing Front" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << this->front.at(i).at(j) << " ";
        }
        cout << endl;
    }
    cout << endl;
    return;
}

void Cube::printBack () {
    cout << "Printing Back" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << this->back.at(i).at(j) << " ";
        }
        cout << endl;
    }
    cout << endl;
    return;
}

void Cube::printLeft () {
    cout << "Printing Left" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << this->left.at(i).at(j) << " ";
        }
        cout << endl;
    }
    cout << endl;
    return;
}
void Cube::printRight () {
    cout << "Printing Right" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << this->right.at(i).at(j) << " ";
        }
        cout << endl;
    }
    cout << endl;
    return;
}
void Cube::printTop () {
    cout << "Printing Top" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << this->top.at(i).at(j) << " ";
        }
        cout << endl;
    }
    cout << endl;
    return;
}

void Cube::printBot () {
    cout << "Printing Bot" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << this->bot.at(i).at(j) << " ";
        }
        cout << endl;
    }
    cout << endl;
    return;
}

void Cube::F () { //change in front affects everything except for back

}

void Cube::F_back () { 

}

void Cube::B () { //change in back affects everything except for front

}

void Cube::B_back () {

}

void Cube::L () { //change in left affects everything except for right

}

void Cube::L_back () {

}

void Cube::R (){ //change in right affects everything but left

}

void Cube::R_back() {

}

void Cube::U () { //change in up affects everything but bot

}

void Cube::U_back () {

}

void Cube::D () { //change in bot affects everything but top

}

void Cube::D_back () {

}

