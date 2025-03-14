/*
 * Copyright (c) 2025 Fatima 
 * Federal University Dutse
 * All rights reserved.
 *  
 * Pointers to Objects in Inheritance
 * Created on: March 14, 2025
 */

#include <iostream>
using namespace std;

// Base class
class Base {
public:
    virtual void display() { 
        cout << "Display function of Base class" << endl; 
    }
};

// Derived class
class Derived : public Base {
public:
    void display() override { 
        cout << "Display function of Derived class" << endl; 
    }
};

int main() {
    Base *ptr;  // Pointer to base class
    Derived obj; 

    ptr = &obj;  // Base class pointer pointing to derived class object
    ptr->display(); // Calls the overridden function in Derived class due to polymorphism

    return 0;
}
