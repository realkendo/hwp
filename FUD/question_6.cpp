/*
 * Copyright (c) 2025 Fatima 
 * Federal University Dutse
 * All rights reserved.
 *  
 * Swap Private Data Members using Friend Function
 * Created on: March 14, 2025
 */

#include <iostream>
using namespace std;

class class_2; // Forward declaration of class_2

class class_1 {
private:
    int value1;

public:
    class_1(int v) : value1(v) {} // Constructor to initialize value1

    // Friend function declaration
    friend void swapData(class_1 &obj1, class_2 &obj2);

    void display() {
        cout << "class_1 value: " << value1 << endl;
    }
};

class class_2 {
private:
    int value2;

public:
    class_2(int v) : value2(v) {} // Constructor to initialize value2

    // Friend function declaration
    friend void swapData(class_1 &obj1, class_2 &obj2);

    void display() {
        cout << "class_2 value: " << value2 << endl;
    }
};

// Friend function definition
void swapData(class_1 &obj1, class_2 &obj2) {
    int temp = obj1.value1;
    obj1.value1 = obj2.value2;
    obj2.value2 = temp;
}

int main() {
    class_1 obj1(10);
    class_2 obj2(20);

    cout << "Before swapping:\n";
    obj1.display();
    obj2.display();

    // Swapping private data members using the friend function
    swapData(obj1, obj2);

    cout << "\nAfter swapping:\n";
    obj1.display();
    obj2.display();

    return 0;
}
