#include <iostream>

int main()
{

    double pesos;
    double reais;
    double soles;

    double dollars;

    std::cout << "Enter number of Pesos: ";
    std::cin >> pesos;

    std::cout << "Enter number of Reais: ";
    std::cin >> reais;

    std::cout << "🇸🇻 Enter number of Soles: ";
    std::cin >> soles;

    dollars = 0.049 * pesos + 0.1305 * reais + 0.1144 * soles;

    std::cout << "Total USD = $" << dollars << "\n";
}