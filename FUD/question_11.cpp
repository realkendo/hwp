/*
 * Copyright (c) 2025 Fatima 
 * Federal University Dutse
 * All rights reserved.
 *  
 * Digital Library Management System
 * Created on: March 14, 2025
 */

#include <iostream>
#include <vector>
using namespace std;

class Media {
protected:
    string title;
    bool isIssued = false;
public:
    Media(string t) : title(t) {}
    virtual void display() = 0;

    // Getter function to access the title
    string getTitle() const { return title; }

    virtual void issue() {
        if (isIssued)
            cout << title << " is already issued.\n";
        else {
            cout << title << " issued.\n";
            isIssued = true;
        }
    }
    virtual void returnItem() {
        if (isIssued) {
            cout << title << " returned.\n";
            isIssued = false;
        } else {
            cout << title << " was not issued.\n";
        }
    }
    virtual ~Media() {}
};

class Book : public Media {
    int pages;
public:
    Book(string t, int p) : Media(t), pages(p) {}
    void display() override {
        cout << "Book: " << title << " | Pages: " << pages << " | " 
             << (isIssued ? "Issued" : "Available") << endl;
    }
};

class Tape : public Media {
    float duration;
public:
    Tape(string t, float d) : Media(t), duration(d) {}
    void display() override {
        cout << "Tape: " << title << " | Duration: " << duration << " mins | " 
             << (isIssued ? "Issued" : "Available") << endl;
    }
};

class Library {
    vector<Media*> items;
public:
    void add(Media* m) { items.push_back(m); }
    void display() {
        for (auto &i : items)
            i->display();
    }
    void issue(string t) {
        for (auto &i : items) {
            if (i->getTitle() == t) {  // Using getter instead of direct access
                i->issue();
                return;
            }
        }
        cout << t << " not found.\n";
    }
    void returnItem(string t) {
        for (auto &i : items) {
            if (i->getTitle() == t) {  // Using getter instead of direct access
                i->returnItem();
                return;
            }
        }
        cout << t << " not found.\n";
    }
    ~Library() {
        for (auto &i : items)
            delete i;
    }
};

int main() {
    Library lib;
    lib.add(new Book("C++ Programming", 500));
    lib.add(new Tape("Data Structures", 120));

    lib.display();
    lib.issue("C++ Programming");
    lib.issue("Data Structures");
    lib.issue("C++ Programming");  // Trying to issue again
    lib.returnItem("C++ Programming");
    lib.display();

    return 0;
}
