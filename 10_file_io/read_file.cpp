/*
 * read_file.cpp
 * Reading data from files
 * Demonstrates: ifstream, file reading, line-by-line reading
 */

#include <iostream>
#include <fstream>
#include <string>

int main() {
    
    std::ifstream inFile("input.txt");
    std::string line;
    
    if (inFile.is_open()) {
        std::cout << "Reading from file:\n";
        std::cout << "-------------------\n";
        
        while (std::getline(inFile, line)) {
            std::cout << line << "\n";
        }
        
        inFile.close();
    } else {
        std::cout << "Unable to open file for reading.\n";
        std::cout << "Make sure 'input.txt' exists in the current directory.\n";
    }
    
    return 0;
}
