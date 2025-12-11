/*
 * basic_exception.cpp
 * Exception handling basics
 * Demonstrates: try-catch blocks, throwing exceptions, error handling
 */

#include <iostream>
#include <stdexcept>

double divide(double a, double b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero error!");
    }
    return a / b;
}

int main() {
    
    double x = 10.0;
    double y = 2.0;
    
    try {
        double result = divide(x, y);
        std::cout << x << " / " << y << " = " << result << "\n\n";
        
        // This will throw an exception
        result = divide(x, 0);
        std::cout << "This won't be printed\n";
        
    } catch (const std::runtime_error& e) {
        std::cout << "Error caught: " << e.what() << "\n";
    }
    
    std::cout << "Program continues after exception handling\n";
    
    return 0;
}
