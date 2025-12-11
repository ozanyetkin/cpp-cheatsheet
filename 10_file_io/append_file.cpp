/*
 * append_file.cpp
 * Appending data to existing files
 * Demonstrates: std::ios::app mode, appending without overwriting
 */

#include <iostream>
#include <fstream>
#include <string>

int main() {
    
    // Open file in append mode
    std::ofstream outFile("log.txt", std::ios::app);
    
    if (outFile.is_open()) {
        outFile << "New log entry: Program executed successfully\n";
        outFile << "Timestamp: 2025-12-11\n";
        outFile << "---\n";
        
        outFile.close();
        std::cout << "Successfully appended to file!\n";
    } else {
        std::cout << "Unable to open file for appending.\n";
    }
    
    return 0;
}
