#include <iostream>
#include <cmath>

int main()
{

    float a;
    float b;
    float c;

    std::cout << "Enter a:";
    std::cin >> a;

    std::cout << "Enter b:";
    std::cin >> b;

    std::cout << "Enter c:";
    std::cin >> c;

    float root1 = (-b + std::sqrt(b * b - 4 * a * c)) / (2 * a);
    float root2 = (-b - std::sqrt(b * b - 4 * a * c)) / (2 * a);

    std::cout << "Root 1 is " << root1 << "\n";
    std::cout << "Root 2 is " << root2 << "\n";
}