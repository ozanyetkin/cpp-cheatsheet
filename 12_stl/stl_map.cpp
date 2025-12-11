/*
 * stl_map.cpp
 * Using STL map for key-value pairs
 * Demonstrates: map operations, insertion, lookup, iteration
 */

#include <iostream>
#include <map>
#include <string>

int main() {
    
    // Create a map: string keys, int values
    std::map<std::string, int> ages;
    
    // Insert elements
    ages["Alice"] = 25;
    ages["Bob"] = 30;
    ages["Charlie"] = 22;
    ages.insert({"Diana", 28});
    
    std::cout << "Ages map:\n";
    for (const auto& pair : ages) {
        std::cout << pair.first << ": " << pair.second << " years old\n";
    }
    std::cout << "\n";
    
    // Access element
    std::cout << "Bob's age: " << ages["Bob"] << "\n\n";
    
    // Check if key exists
    if (ages.find("Alice") != ages.end()) {
        std::cout << "Alice is in the map\n";
    }
    
    // Update value
    ages["Alice"] = 26;
    std::cout << "Updated Alice's age: " << ages["Alice"] << "\n\n";
    
    // Size
    std::cout << "Map size: " << ages.size() << "\n";
    
    // Erase element
    ages.erase("Charlie");
    std::cout << "After erasing Charlie, size: " << ages.size() << "\n";
    
    return 0;
}
