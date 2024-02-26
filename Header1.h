#include <iostream>
using namespace std;

class matrix {
private:
	int row;
	int col;
	int* array;
public:
	matrix();
	matrix(int r, int c);
	matrix(const matrix& m);
};

void printMatrix(matrix m);
