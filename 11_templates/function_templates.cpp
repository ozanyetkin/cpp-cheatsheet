/*
 * function_templates.cpp
 * Generic programming with function templates
 * Demonstrates: template functions, type parameters, code reusability
 */

#include <iostream>
#include <string>

// Function template - works with any data type
template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

// Template function with multiple type parameters
template <typename T, typename U>
void display(T value1, U value2) {
    std::cout << "Value 1: " << value1 << ", Value 2: " << value2 << "\n";
}

int main() {
    
    // Works with integers
    std::cout << "Max of 10 and 20: " << getMax(10, 20) << "\n";
    
    // Works with doubles
    std::cout << "Max of 3.14 and 2.71: " << getMax(3.14, 2.71) << "\n";
    
    // Works with strings
    std::cout << "Max of 'apple' and 'banana': " 
              << getMax(std::string("apple"), std::string("banana")) << "\n\n";
    
    // Multiple type parameters
    display(42, 3.14);
    display("Hello", 100);
    display(true, "World");
    
    return 0;
}
