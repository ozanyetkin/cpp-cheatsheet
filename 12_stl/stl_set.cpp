/*
 * stl_set.cpp
 * Using STL set for unique sorted elements
 * Demonstrates: set operations, automatic sorting, uniqueness
 */

#include <iostream>
#include <set>

int main() {
    
    std::set<int> numbers;
    
    // Insert elements
    numbers.insert(5);
    numbers.insert(2);
    numbers.insert(8);
    numbers.insert(2);  // Duplicate - won't be added
    numbers.insert(1);
    numbers.insert(5);  // Duplicate - won't be added
    
    std::cout << "Set (automatically sorted and unique):\n";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n\n";
    
    // Check if element exists
    if (numbers.find(8) != numbers.end()) {
        std::cout << "8 is in the set\n";
    }
    
    if (numbers.find(10) == numbers.end()) {
        std::cout << "10 is not in the set\n";
    }
    std::cout << "\n";
    
    // Size
    std::cout << "Set size: " << numbers.size() << "\n";
    
    // Erase element
    numbers.erase(2);
    std::cout << "After erasing 2: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";
    
    return 0;
}
