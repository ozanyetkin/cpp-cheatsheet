#include <iostream>

int sum(int a, int b);

int main()
{
    int r = sum(10, 20);
    std::cout << r;
}

int sum(int a, int b)
{
    return (a + b);
}