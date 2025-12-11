/*
 * write_file.cpp
 * Writing data to files
 * Demonstrates: ofstream, file creation, writing text
 */

#include <iostream>
#include <fstream>
#include <string>

int main() {
    
    // Create and open a file for writing
    std::ofstream outFile("output.txt");
    
    if (outFile.is_open()) {
        outFile << "Hello, File I/O!\n";
        outFile << "This is line 2.\n";
        outFile << "Writing numbers: " << 42 << ", " << 3.14 << "\n";
        
        outFile.close();
        std::cout << "Successfully wrote to file!\n";
    } else {
        std::cout << "Unable to open file for writing.\n";
    }
    
    return 0;
}
