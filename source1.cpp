#include "Header1.h"

matrix::matrix() : rows(0), cols(0) {}

matrix::matrix(int r, int c) : row(r), col(c) {}

matrix::matrix(const matrix& m) : row(m.row), col(m.col) {}

ostream& operator<<(ostream& os, const matrix& m)
{
	for (int i = 0; i < m.row; i++) {
		for (int j = 0; j < m.col; j++) {
			os << m[i][j] << ' ';
		}
		cout << endl;
	}
	return os;
}

istream& operator>>(istream& is, matrix& m)
{
	for (int i = 0; i < m.row; i++) {
		for (int j = 0; j < m.col; j++) {
			is >> m[i][j];
		}
	}
	return is;
}

//void printMatrix(matrix* m, int rows,int cols)
//{
//  for (int i = 0; i < rows; i++) {
//    for (int j = 0; j < cols; j++) {
//      cout << m[i][j] << ' ';
//    }
//    cout << endl;
//  }
//}