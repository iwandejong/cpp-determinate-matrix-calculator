#ifndef Matrix_H
#define Matrix_H

#include <iostream>

class Matrix {
    private:
        int*** matrix;
        int*** minor;
        int n;
        int result;
    public:
        Matrix(int size, int** input);
        ~Matrix();
        void calculateDet();
        void outputDet();
};

#endif // Matrix_H