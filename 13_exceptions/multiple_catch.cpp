/*
 * multiple_catch.cpp
 * Multiple catch blocks for different exception types
 * Demonstrates: handling different exceptions, custom exceptions
 */

#include <iostream>
#include <stdexcept>
#include <string>

int checkAge(int age) {
    if (age < 0) {
        throw std::invalid_argument("Age cannot be negative!");
    }
    if (age > 150) {
        throw std::out_of_range("Age is unrealistically high!");
    }
    if (age < 18) {
        throw std::logic_error("Must be 18 or older!");
    }
    return age;
}

int main() {
    
    int ages[] = {25, -5, 200, 15};
    
    for (int age : ages) {
        try {
            std::cout << "Checking age: " << age << " ... ";
            checkAge(age);
            std::cout << "Valid!\n";
            
        } catch (const std::invalid_argument& e) {
            std::cout << "Invalid Argument: " << e.what() << "\n";
            
        } catch (const std::out_of_range& e) {
            std::cout << "Out of Range: " << e.what() << "\n";
            
        } catch (const std::logic_error& e) {
            std::cout << "Logic Error: " << e.what() << "\n";
            
        } catch (...) {
            std::cout << "Unknown error occurred\n";
        }
    }
    
    return 0;
}
