Cube::Cube() {
    //FIXME: Once i have a cube, configure the sides right
    vector<char> yellow = {'Y', 'Y', 'Y'};
    vector<char> white = {'W', 'W', 'W'};
    vector<char> blue  = {'B', 'B', 'B'};
    vector<char> red = {'R', 'R', 'R'};
    vector<char> green = {'G', 'G', 'G'};
    vector<char> orange = {'O', 'O', 'O'};

    vector<vector<char>> top = {yellow, yellow, yellow};
}

void Cube::CubeScrambled(Cube* cube) {
    
}

void printCube() {
    //TODO: bunch of for loops to print out the cube
    cout << "Printing Front" << endl;
    cout << "Printing Left" << endl;
    cout << "Printing Back" << endl;
    cout << "Printing Right" << endl;
    cout << "Printing Top" << endl;
    cout << "Printing Bot" << endl;
}

void Cube::F () {

}
void Cube::F_back ();
void Cube::B ();
void Cube::B_back ();
void Cube::L ();
void Cube::L_back ();
void Cube::R ();
void Cube::R_back();
void Cube::U ();
void Cube::U_back ();
void Cube::D ();
void Cube::D_back ();

