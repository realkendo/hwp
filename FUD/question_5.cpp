/*
 * Copyright (c) 2025 Fatima 
 * Federal University Dutse
 * All rights reserved.
 *  
 * Shopping List Program
 * Created on: March 14, 2025
 */

#include <iostream>
using namespace std;

class ShoppingList {
private:
    struct Item {
        int code;
        float price;
    };

    Item items[50];  // Array to store items (max 50 items)
    int itemCount;   // Count of items in the list

public:
    ShoppingList() {
        itemCount = 0;
    }

    // Function to add an item
    void addItem() {
        if (itemCount < 50) {
            cout << "Enter Item Code: ";
            cin >> items[itemCount].code;
            cout << "Enter Item Price: ";
            cin >> items[itemCount].price;
            itemCount++;
            cout << "Item added successfully!\n";
        } else {
            cout << "Shopping list is full!\n";
        }
    }

    // Function to delete an item by code
    void deleteItem() {
        int code;
        cout << "Enter Item Code to delete: ";
        cin >> code;
        bool found = false;

        for (int i = 0; i < itemCount; i++) {
            if (items[i].code == code) {
                found = true;
                for (int j = i; j < itemCount - 1; j++) {
                    items[j] = items[j + 1]; // Shift items left
                }
                itemCount--;
                cout << "Item deleted successfully!\n";
                break;
            }
        }

        if (!found) {
            cout << "Item not found!\n";
        }
    }

    // Function to calculate total price of all items
    void totalValue() {
        float total = 0;
        for (int i = 0; i < itemCount; i++) {
            total += items[i].price;
        }
        cout << "Total Order Value: " << total << endl;
    }

    // Function to display all items
    void displayList() {
        if (itemCount == 0) {
            cout << "Shopping list is empty!\n";
        } else {
            cout << "Shopping List:\n";
            for (int i = 0; i < itemCount; i++) {
                cout << "Item Code: " << items[i].code << ", Price: " << items[i].price << endl;
            }
        }
    }
};

int main() {
    ShoppingList shop;
    int choice;

    do {
        cout << "\nShopping List Menu:\n";
        cout << "1. Add Item\n";
        cout << "2. Delete Item\n";
        cout << "3. Display Items\n";
        cout << "4. Total Order Value\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                shop.addItem();
                break;
            case 2:
                shop.deleteItem();
                break;
            case 3:
                shop.displayList();
                break;
            case 4:
                shop.totalValue();
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
