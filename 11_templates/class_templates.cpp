/*
 * class_templates.cpp
 * Generic classes using templates
 * Demonstrates: template classes, generic data structures
 */

#include <iostream>
#include <string>

// Template class
template <typename T>
class Box {
    private:
        T content;
        
    public:
        Box(T c) : content(c) {}
        
        void setContent(T c) {
            content = c;
        }
        
        T getContent() {
            return content;
        }
        
        void display() {
            std::cout << "Box contains: " << content << "\n";
        }
};

int main() {
    
    // Box for integers
    Box<int> intBox(42);
    intBox.display();
    intBox.setContent(100);
    std::cout << "Updated content: " << intBox.getContent() << "\n\n";
    
    // Box for strings
    Box<std::string> stringBox("Hello Templates");
    stringBox.display();
    
    // Box for doubles
    Box<double> doubleBox(3.14159);
    doubleBox.display();
    
    return 0;
}
