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
//Begin changing front face
    rotate_helper(front);

//Begin changing the three other affected faces
    char temp1 = top[2][0];
    char temp2 = top[2][1];
    char temp3 = top[2][2];
    //replace top top side with left left side
    top[2][0] = left[0][2];
    top[2][1] = left[1][2];
    top[2][2] = left[2][2];
    //replace left left with bot bot side
    left[0][2] = bot[0][0];
    left[1][2] = bot[0][1];
    left[2][2] = bot[0][2];
    //replace bot bot side with right right side
    bot[0][0] = right[2][0];
    bot[0][1] = right[1][0];
    bot[0][2] = right[0][0];
    //replace right right with top top side
    right[0][0] = temp1;
    right[1][0] = temp2;
    right[2][0] = temp3;
}

void Cube::F_back () { 
    F();
    F();
    F();
}

void Cube::B () { //change in back affects everything except for front
    //change in front affects everything except for back
//Begin changing back face
    rotate_helper(back);  
//Begin changing the three other affected faces
    char temp1 = top[0][0];
    char temp2 = top[0][1];
    char temp3 = top[0][2];
    //replace top top side with left left side
    top[0][0] = right[0][2];
    top[0][1] = right[1][2];
    top[0][2] = right[2][2];
    //replace left left with bot bot side
    right[0][2] = bot[2][2];
    right[1][2] = bot[2][1];
    right[2][2] = bot[2][0];
    //replace bot bot side with right right side
    bot[2][2] = left[2][0];
    bot[2][1] = left[1][0];
    bot[2][0] = left[0][0];
    //replace right right with top top side
    left[2][0] = temp1;
    left[1][0] = temp2;
    left[0][0] = temp3;
}

void Cube::B_back () {
    B();
    B();
    B();
}

void Cube::L () { //change in left affects everything except for right
//Begin changing left face
    rotate_helper(left);
//Begin changing the three other affected faces
    char temp1 = top[0][0];
    char temp2 = top[1][0];
    char temp3 = top[2][0];
    //replace top top side with left left side
    top[0][0] = back[2][2];
    top[1][0] = back[1][2];
    top[2][0] = back[0][2];
    //replace left left with bot bot side
    back[0][2] = bot[2][0];
    back[1][2] = bot[1][0];
    back[2][2] = bot[0][0];
    //replace bot bot side with right right side
    bot[2][0] = front[2][0];
    bot[1][0] = front[1][0];
    bot[0][0] = front[0][0];
    //replace right right with top top side
    front[0][0] = temp1;
    front[1][0] = temp2;
    front[2][0] = temp3;
}

void Cube::L_back () {
    L(); L(); L();
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

//Add a catchall function to do the moves

void Cube::rotate_helper(vector<vector<char>>& face) {
//Save two positions
    char temp1 = face[2][2];
    char temp2 = face[1][2];

    //move top layer to the right layer
    face[2][2] = face[0][2];
    face[1][2] = face[0][1];
    face[0][2] = face[0][0];

    //move left layer to the top layer
    face[0][1] = face[1][0];
    face[0][0] = face[2][0];

    //move bottom layer to the left layer
    face[1][0] = face[2][1];
    face[2][0] = temp1;

    //move right layer to the bottom layer
    face[2][1] = temp2;
}