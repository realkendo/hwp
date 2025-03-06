#include <iostream>
#include <string>
#include <vector>

// Simple function to calculate the sum of two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    // Basic output
    std::cout << "Hello, World! Your C++ compiler is working." << std::endl;
    
    // Variables and calculation
    int x = 5;
    int y = 7;
    int sum = add(x, y);
    
    // Output calculation result
    std::cout << x << " + " << y << " = " << sum << std::endl;
    
    // String manipulation
    std::string name;
    std::cout << "Please enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Hello, " << name << "!" << std::endl;
    
    // Vector demonstration
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::cout << "Vector contents: ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    // If statement
    if (sum > 10) {
        std::cout << "The sum is greater than 10." << std::endl;
    } else {
        std::cout << "The sum is not greater than 10." << std::endl;
    }
    
    std::cout << "Compiler test completed successfully!" << std::endl;
    
    return 0;
}