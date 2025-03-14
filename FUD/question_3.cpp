/*
 * Copyright (c) 2025 Fatima 
 * Federal University Dutse
 * All rights reserved.
 *  
 * Student Examination Record
 * Created on: March 14, 2025
 */

#include <iostream>
using namespace std;

// Class to store student details
class Student {
public:
    string name;
    int rollNo;
    char grade;

    // Function to get student details
    void getDetails() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No.: ";
        cin >> rollNo;
        cout << "Enter Grade: ";
        cin >> grade;
    }

    // Function to display student details
    void displayDetails() {
        cout << "Name: " << name << ", Roll No: " << rollNo << ", Grade: " << grade << endl;
    }
};

int main() {
    const int numStudents = 3;
    Student students[numStudents];

    // Getting input for students
    cout << "Enter details of " << numStudents << " students:\n";
    for (int i = 0; i < numStudents; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].getDetails();
    }

    // Displaying student details
    cout << "\nStudent details:\n";
    for (int i = 0; i < numStudents; i++) {
        students[i].displayDetails();
    }

    return 0;
}
