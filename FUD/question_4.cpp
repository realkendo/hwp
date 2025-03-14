/*
 * Copyright (c) 2025 Fatima 
 * Federal University Dutse
 * All rights reserved.
 *  
 * Object Counter Program
 * Created on: March 14, 2025
 */

#include <iostream>
using namespace std;

class Counter {
private:
    static int count; // Static variable to track object count

public:
    // Constructor increments count when an object is created
    Counter() {
        count++;
    }

    // Static function to display object count
    static void showCount() {
        cout << "Total objects created: " << count << endl;
    }
};

// Initializing static member outside the class
int Counter::count = 0;

int main() {
    Counter obj1, obj2, obj3; // Creating three objects

    // Displaying the count of objects
    Counter::showCount();

    return 0;
}
