/*
 * pointer_arithmetic.cpp
 * Pointer arithmetic with arrays
 * Demonstrates: incrementing pointers, array traversal with pointers
 */

#include <iostream>

int main() {
    
    int numbers[] = {10, 20, 30, 40, 50};
    int* ptr = numbers;  // Points to first element
    
    std::cout << "Array traversal using pointer arithmetic:\n";
    
    for (int i = 0; i < 5; i++) {
        std::cout << "Address: " << ptr << " Value: " << *ptr << "\n";
        ptr++;  // Move to next element
    }
    
    // Alternative: pointer notation
    ptr = numbers;
    std::cout << "\nUsing array notation with pointers:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << "numbers[" << i << "] = " << *(ptr + i) << "\n";
    }
    
    return 0;
}
