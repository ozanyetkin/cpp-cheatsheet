/*
 * basic_pointers.cpp
 * Introduction to pointers - variables that store memory addresses
 * Demonstrates: pointer declaration, dereferencing, address-of operator
 */

#include <iostream>

int main() {
    
    int score = 100;
    int* ptr = &score;  // Pointer to score's memory address
    
    std::cout << "Value of score: " << score << "\n";
    std::cout << "Address of score: " << &score << "\n";
    std::cout << "Value stored in ptr: " << ptr << "\n";
    std::cout << "Value pointed to by ptr: " << *ptr << "\n\n";
    
    // Modify value through pointer
    *ptr = 200;
    std::cout << "After *ptr = 200:\n";
    std::cout << "Value of score: " << score << "\n";
    std::cout << "Value pointed to by ptr: " << *ptr << "\n";
    
    return 0;
}
