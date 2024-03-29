#ifndef CUBE_H
#define CUBE_H

#include <vector>
#include <iostream>

using namespace std;

class Cube {
    private:
        vector<vector<char>> front;
        vector<vector<char>> back;
        vector<vector<char>> left;
        vector<vector<char>> right;
        vector<vector<char>> top;
        vector<vector<char>> bot;

    
    public:
    Cube();

    void printCube ();
    void printFront ();
    void printBack ();
    void printLeft ();
    void printRight ();
    void printTop ();
    void printBot ();

    void CubeScrambled(Cube*);

    void F ();
    void F_back ();
    void B ();
    void B_back ();
    void L ();
    void L_back ();
    void R ();
    void R_back();
    void U ();
    void U_back ();
    void D ();
    void D_back ();

    void rotate_helper(vector<vector<char>>&);
    void rotate_helperY(vector<vector<char>>&);
};

#endif
