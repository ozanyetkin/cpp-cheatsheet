/*
 * null_pointers.cpp
 * Working with null pointers and pointer validation
 * Demonstrates: nullptr, pointer checking, safe pointer usage
 */

#include <iostream>

int main() {
    
    int* ptr = nullptr;  // C++11 way to initialize null pointer
    
    std::cout << "ptr is: " << ptr << "\n";
    
    if (ptr == nullptr) {
        std::cout << "Pointer is null, cannot dereference\n";
    }
    
    int value = 42;
    ptr = &value;
    
    if (ptr != nullptr) {
        std::cout << "Pointer is valid, value: " << *ptr << "\n";
    }
    
    return 0;
}
