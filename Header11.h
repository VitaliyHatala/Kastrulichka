#include "Header1.h"

class matrix2 : public matrix {
public:
    matrix2() : matrix() {}
    matrix2(int r, int c, int** arr) : matrix(r, c, arr) {}

    void fillWithOnes();
};
