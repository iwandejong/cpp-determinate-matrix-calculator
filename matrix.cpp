#include "matrix.h"
#include <cmath>
using namespace std;

Matrix::Matrix(int size, int** input) {
    n = size;
    result = 0;
    matrix = new int**[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int*[n];
        for (int j = 0; j < n; j++) {
            matrix[i][j] = &input[i][j];
        }
    }
}

Matrix::~Matrix() {
    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

void Matrix::calculateDet() {
    cout << "In the format: sign * scalar * det() function = answer"; 
    int sum = 0;
    int elim = 0;
    while (elim < n) {
        minor = new int**[n];
        for (int i = 0; i < n; i++) {
            minor[i] = new int*[n];
            for (int j = 0; j < n; j++) {
                minor[i][j] = NULL;
            }
        }

        for (int i = 1; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (j != elim) {
                        minor[i][j] = matrix[i][j];
                    }
                }
        }

        int** temp = new int*[2];
        for (int i = 0; i < 2; i++) {
            temp[i] = new int[2];
            for (int j = 0; j < 2; j++) {
                temp[i][j] = 0;
            }
        }

        int r = 0, c = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (minor[i][j] != NULL) {
                    if (c == 2) {
                        r++;
                        c = 0;
                    }
                    temp[r][c] = *minor[i][j];
                    c++;
                }
            }
        }
        int sign = pow(-1, elim+2);
        int scalar = *matrix[0][elim];
        int det = temp[0][0] * temp[1][1] - temp[0][1] * temp[1][0];

        sum += sign * scalar * det;
        if (sign < 0) {
            cout << sign << "*" << scalar << " * det([" << temp[0][0] << "," << temp[0][1] << "]" << endl; 
            cout << "\t   [" << temp[1][0] << "," << temp[1][1] << "])" << " = " << sign * scalar * det << endl; 
        }
        else {
            cout << " " << sign << "*" << scalar << " * det([" << temp[0][0] << "," << temp[0][1] << "]" << endl; 
            cout << "\t   [" << temp[1][0] << "," << temp[1][1] << "])" << " = " << sign * scalar * det << endl; 
        }
        elim++;
    }
    result = sum;
}

void Matrix::outputDet() {
    cout << "Result: " << result << endl;
}

