/*
 * Copyright (c) 2025 Fatima 
 * Federal University Dutse
 * All rights reserved.
 *  
 * Complex Number Addition using Friend Function
 * Created on: March 14, 2025
 */

#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
    // Constructor to initialize complex number
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Friend function to add two complex numbers
    friend Complex addComplex(const Complex &c1, const Complex &c2);

    // Function to display a complex number
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

// Friend function definition
Complex addComplex(const Complex &c1, const Complex &c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    float r1, i1, r2, i2;
    
    // Taking user input
    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> r1 >> i1;
    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> r2 >> i2;

    Complex num1(r1, i1), num2(r2, i2);
    
    cout << "\nFirst Complex Number: ";
    num1.display();
    cout << "Second Complex Number: ";
    num2.display();

    // Adding two complex numbers using friend function
    Complex sum = addComplex(num1, num2);

    cout << "\nSum of Complex Numbers: ";
    sum.display();

    return 0;
}
