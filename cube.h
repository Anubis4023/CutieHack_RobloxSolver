#ifndef CUBE_H
#define CUBE_H

#include <vector>

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
};

#endif
