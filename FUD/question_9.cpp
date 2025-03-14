/*
 * Copyright (c) 2025 Fatima 
 * Federal University Dutse
 * All rights reserved.
 *  
 * Matrix Class with Operator Overloading (+, *, ==)
 * Created on: March 14, 2025
 */

#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int **matrix;

public:
    // Constructor to initialize matrix with given dimensions
    Matrix(int r, int c) {
        rows = r;
        cols = c;
        matrix = new int *[rows];
        for (int i = 0; i < rows; i++) {
            matrix[i] = new int[cols];
        }
    }

    // Destructor to free dynamically allocated memory
    ~Matrix() {
        for (int i = 0; i < rows; i++) {
            delete[] matrix[i];
        }
        delete[] matrix;
    }

    // Function to insert elements into the matrix
    void insertElements() {
        cout << "Enter elements for " << rows << "x" << cols << " matrix:\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> matrix[i][j];
            }
        }
    }

    // Function to display the matrix
    void displayMatrix() const {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << matrix[i][j] << "\t";
            }
            cout << endl;
        }
    }

    // Overloaded + operator for matrix addition
    Matrix operator+(const Matrix &m) {
        if (rows != m.rows || cols != m.cols) {
            cout << "Error: Matrices must have the same dimensions for addition.\n";
            return Matrix(0, 0);
        }
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.matrix[i][j] = matrix[i][j] + m.matrix[i][j];
            }
        }
        return result;
    }

    // Overloaded * operator for matrix multiplication
    Matrix operator*(const Matrix &m) {
        if (cols != m.rows) {
            cout << "Error: Number of columns of first matrix must be equal to number of rows of second matrix.\n";
            return Matrix(0, 0);
        }
        Matrix result(rows, m.cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < m.cols; j++) {
                result.matrix[i][j] = 0;
                for (int k = 0; k < cols; k++) {
                    result.matrix[i][j] += matrix[i][k] * m.matrix[k][j];
                }
            }
        }
        return result;
    }

    // Overloaded == operator to compare two matrices
    bool operator==(const Matrix &m) {
        if (rows != m.rows || cols != m.cols)
            return false;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] != m.matrix[i][j])
                    return false;
            }
        }
        return true;
    }
};

int main() {
    int r1, c1, r2, c2;

    // Input dimensions for the first matrix
    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    Matrix mat1(r1, c1);
    mat1.insertElements();

    // Input dimensions for the second matrix
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;
    Matrix mat2(r2, c2);
    mat2.insertElements();

    // Displaying matrices
    cout << "\nFirst Matrix:\n";
    mat1.displayMatrix();
    cout << "\nSecond Matrix:\n";
    mat2.displayMatrix();

    // Matrix Addition
    if (r1 == r2 && c1 == c2) {
        Matrix sum = mat1 + mat2;
        cout << "\nMatrix Addition Result:\n";
        sum.displayMatrix();
    } else {
        cout << "\nMatrix Addition Not Possible (Different Dimensions)\n";
    }

    // Matrix Multiplication
    if (c1 == r2) {
        Matrix product = mat1 * mat2;
        cout << "\nMatrix Multiplication Result:\n";
        product.displayMatrix();
    } else {
        cout << "\nMatrix Multiplication Not Possible (Columns of First != Rows of Second)\n";
    }

    // Matrix Comparison
    if (mat1 == mat2) {
        cout << "\nBoth Matrices Are Equal.\n";
    } else {
        cout << "\nMatrices Are Not Equal.\n";
    }

    return 0;
}
