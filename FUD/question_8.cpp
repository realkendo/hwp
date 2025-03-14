/*
 * Copyright (c) 2025 Fatima 
 * Federal University Dutse
 * All rights reserved.
 *  
 * Matrix Class with Insert and Retrieve Functions
 * Created on: March 14, 2025
 */

#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int matrix[10][10]; // Assuming a max size of 10x10 for simplicity

public:
    // Constructor to initialize matrix dimensions
    Matrix(int r, int c) {
        rows = r;
        cols = c;
    }

    // Function to insert elements into the matrix
    void insertElements() {
        cout << "Enter elements for the matrix (" << rows << "x" << cols << "):\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
                cin >> matrix[i][j];
            }
        }
    }

    // Function to retrieve and display matrix elements
    void displayMatrix() {
        cout << "\nThe matrix is:\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << matrix[i][j] << "\t";
            }
            cout << endl;
        }
    }
};

int main() {
    int r, c;

    // Getting matrix dimensions from the user
    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;

    // Creating matrix object with given dimensions
    Matrix mat(r, c);

    // Inserting and displaying matrix elements
    mat.insertElements();
    mat.displayMatrix();

    return 0;
}
