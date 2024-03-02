#pragma once
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class matrix {
protected:
	int rows;
	int col;
	int** array;
public:
	matrix();
	matrix(int r, int c, int** array);
	matrix(const matrix& m);
	friend ostream& operator<<(ostream& os, const matrix& m);
	friend istream& operator>>(istream& is, matrix& m);
	bool operator+(istream& is, matrix& m);
	bool operator-(istream& is, matrix& m);
};

void printMatrix(matrix* m, int size);
