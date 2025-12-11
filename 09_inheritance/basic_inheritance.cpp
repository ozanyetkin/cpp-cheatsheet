/*
 * basic_inheritance.cpp
 * Introduction to inheritance - creating derived classes
 * Demonstrates: base class, derived class, protected members
 */

#include <iostream>
#include <string>

// Base class (parent)
class Animal {
    protected:
        std::string name;
        int age;
        
    public:
        Animal(std::string n, int a) : name(n), age(a) {}
        
        void eat() {
            std::cout << name << " is eating.\n";
        }
        
        void sleep() {
            std::cout << name << " is sleeping.\n";
        }
};

// Derived class (child) - inherits from Animal
class Dog : public Animal {
    private:
        std::string breed;
        
    public:
        Dog(std::string n, int a, std::string b) : Animal(n, a), breed(b) {}
        
        void bark() {
            std::cout << name << " barks: Woof!\n";
        }
        
        void displayInfo() {
            std::cout << "Dog: " << name << ", Age: " << age 
                      << ", Breed: " << breed << "\n";
        }
};

int main() {
    
    Dog myDog("Buddy", 3, "Golden Retriever");
    
    myDog.displayInfo();
    myDog.eat();     // Inherited from Animal
    myDog.sleep();   // Inherited from Animal
    myDog.bark();    // Dog-specific method
    
    return 0;
}
