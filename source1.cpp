#include "Header1.h"
matrix2::matrix2() : matrix(){}

matrix2::matrix2(int r, int c, int ** a) : matrix(r, c, a){}

matrix2::matrix2(matrix& m) : matrix(m) {};

ostream& operator<<(ostream& os, const matrix& m)
{
	os << m.rows << "\t" << m.cols;
	for (int i = 0; i < m.rows; i++) {
		for (int j = 0; j < m.cols; j++) {
			os << m.array[i][j] << ' ';
		}
		cout << endl;
	}
	return os;
}

istream& operator>>(istream& is, matrix& m)
{
	is >> m.rows >> m.cols;
	for (int i = 0; i < m.rows; i++) {
		for (int j = 0; j < m.cols; j++) {
			is >> m.array[i][j];
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
