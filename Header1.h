#include <iostream>
using namespace std;

class matrix {
private:
	int row;
	int col;
public:
	matrix();
	matrix(int r, int c);
	matrix(const matrix& m);
	friend ostream& operator<<(ostream& os, const matrix& m);
	friend istream& operator>>(istream& is, matrix& m);
	bool operator+(istream& is, matrix& m);
	bool operator-(istream& is, matrix& m);
	

};

void printMatrix(matrix* m,int size);
