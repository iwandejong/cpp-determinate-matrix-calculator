// This is a determinant calculator for 3x3 matrices. Author: Iwan de Jong

#include <iostream>
#include "matrix.h"
using namespace std;

int main() {
    cout << "Please enter your matrix by row, e.g." << endl << 
    "1 2 3" << endl << "4 5 6" << endl << "7 8 9" << endl << "Press Enter after each entry:" << endl;
    int** input = new int*[3];
    int k = 1;
    for (int i = 0; i < 3; i++) {
        input[i] = new int[3];
        for (int j = 0; j < 3; j++) {
            cin >> input[i][j];
            k++;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << input[i][j] << " ";
        }
        cout << endl;
    }
    string answer = "";
    cout << "Confirm this is right? Y/n (any key to restart)" << endl;
    cin >> answer;
    if (answer == "Y" || answer == "y") {
        Matrix x(3, input);
        x.calculateDet();
        x.outputDet();
    }
    else {
        main();
    }

    cout << "Make another matrix? Y/n (any key to exit)" << endl;
    string temp = "";
    cin >> temp;
    if (temp == "Y" || temp == "y") {
        main();
    }
    else {
        exit(0);
    }
    

    return 0;
}