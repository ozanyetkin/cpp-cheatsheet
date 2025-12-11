/*
 * basic_class.cpp
 * Introduction to classes and objects
 * Demonstrates: class definition, member variables, member functions
 */

#include <iostream>
#include <string>

class Dog {
    public:
        // Member variables (attributes)
        std::string name;
        int age;
        
        // Member function (method)
        void bark() {
            std::cout << name << " says: Woof! Woof!\n";
        }
        
        void displayInfo() {
            std::cout << "Name: " << name << ", Age: " << age << " years\n";
        }
};

int main() {
    
    // Create objects
    Dog dog1;
    dog1.name = "Buddy";
    dog1.age = 3;
    
    Dog dog2;
    dog2.name = "Max";
    dog2.age = 5;
    
    // Use member functions
    dog1.displayInfo();
    dog1.bark();
    
    dog2.displayInfo();
    dog2.bark();
    
    return 0;
}
