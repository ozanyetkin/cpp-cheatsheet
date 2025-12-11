/*
 * polymorphism.cpp
 * Polymorphism with virtual functions
 * Demonstrates: virtual functions, function overriding, runtime polymorphism
 */

#include <iostream>
#include <string>

// Base class
class Shape {
    protected:
        std::string color;
        
    public:
        Shape(std::string c) : color(c) {}
        
        // Virtual function - can be overridden
        virtual double getArea() {
            return 0.0;
        }
        
        virtual void display() {
            std::cout << "Shape with color: " << color << "\n";
        }
        
        virtual ~Shape() {}  // Virtual destructor
};

// Derived class: Circle
class Circle : public Shape {
    private:
        double radius;
        
    public:
        Circle(std::string c, double r) : Shape(c), radius(r) {}
        
        double getArea() override {
            return 3.14159 * radius * radius;
        }
        
        void display() override {
            std::cout << color << " Circle - Radius: " << radius 
                      << ", Area: " << getArea() << "\n";
        }
};

// Derived class: Rectangle
class Rectangle : public Shape {
    private:
        double width;
        double height;
        
    public:
        Rectangle(std::string c, double w, double h) 
            : Shape(c), width(w), height(h) {}
        
        double getArea() override {
            return width * height;
        }
        
        void display() override {
            std::cout << color << " Rectangle - Width: " << width 
                      << ", Height: " << height << ", Area: " << getArea() << "\n";
        }
};

int main() {
    
    // Polymorphism: base class pointers to derived objects
    Shape* shape1 = new Circle("Red", 5.0);
    Shape* shape2 = new Rectangle("Blue", 4.0, 6.0);
    
    shape1->display();  // Calls Circle's display()
    shape2->display();  // Calls Rectangle's display()
    
    std::cout << "\nArea of shape1: " << shape1->getArea() << "\n";
    std::cout << "Area of shape2: " << shape2->getArea() << "\n";
    
    // Clean up
    delete shape1;
    delete shape2;
    
    return 0;
}
