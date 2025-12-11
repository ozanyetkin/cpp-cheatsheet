/*
 * stl_vector.cpp
 * Advanced vector operations from STL
 * Demonstrates: vector methods, iterators, algorithms
 */

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    
    std::vector<int> numbers = {5, 2, 8, 1, 9, 3};
    
    std::cout << "Original vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n\n";
    
    // Sort
    std::sort(numbers.begin(), numbers.end());
    std::cout << "After sorting: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n\n";
    
    // Reverse
    std::reverse(numbers.begin(), numbers.end());
    std::cout << "After reversing: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n\n";
    
    // Find
    auto it = std::find(numbers.begin(), numbers.end(), 8);
    if (it != numbers.end()) {
        std::cout << "Found 8 at position: " << (it - numbers.begin()) << "\n";
    }
    
    // Count
    numbers.push_back(5);
    int count = std::count(numbers.begin(), numbers.end(), 5);
    std::cout << "Number 5 appears " << count << " times\n";
    
    return 0;
}
