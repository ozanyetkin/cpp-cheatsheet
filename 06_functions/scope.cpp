#include <iostream>

void print();

int i = 10; // global variable

int main()
{
    std::cout << i << "\n";
}

void print()
{
    int j = 0; // local variable
    i = 20;
    std::cout << i << "\n";
    std::cout << j << "\n";
}