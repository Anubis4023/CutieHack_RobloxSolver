all: solver

solver: main.cpp cube.cpp
	g++ main.cpp cube.cpp -o solver
