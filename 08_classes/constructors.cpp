/*
 * constructors.cpp
 * Constructors and destructors in classes
 * Demonstrates: default constructor, parameterized constructor, destructor
 */

#include <iostream>
#include <string>

class Book {
    public:
        std::string title;
        std::string author;
        int pages;
        
        // Default constructor
        Book() {
            title = "Unknown";
            author = "Unknown";
            pages = 0;
            std::cout << "Default constructor called\n";
        }
        
        // Parameterized constructor
        Book(std::string t, std::string a, int p) {
            title = t;
            author = a;
            pages = p;
            std::cout << "Parameterized constructor called for: " << title << "\n";
        }
        
        // Destructor
        ~Book() {
            std::cout << "Destructor called for: " << title << "\n";
        }
        
        void displayInfo() {
            std::cout << "Title: " << title << "\n";
            std::cout << "Author: " << author << "\n";
            std::cout << "Pages: " << pages << "\n\n";
        }
};

int main() {
    
    Book book1;  // Calls default constructor
    book1.displayInfo();
    
    Book book2("1984", "George Orwell", 328);  // Calls parameterized constructor
    book2.displayInfo();
    
    return 0;
}  // Destructors called automatically
