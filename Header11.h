#include "Header1.h"

class matrix2  {
private:
	int row;
	int col;
	int* array;
public:
	matrix2();
	matrix2(int r, int c);
	matrix2(const matrix& m);
};
void printMatrix(matrix2 m);
