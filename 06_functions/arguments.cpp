#include <iostream>

void print(int);

int main()
{
    print(10);
    // the argument 10 is received as input value
}

// parameter a is defined for the function print
void print(int a)
{
    std::cout << a;
}