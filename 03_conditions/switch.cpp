#include <iostream>

int main()
{
    int grade;

    std::cin >> grade;

    switch (grade)
    {
    case 9:
        std::cout << "Freshman\n";
        break;
    case 10:
        std::cout << "Sophomore\n";
        break;
    case 11:
        std::cout << "Junior\n";
        break;
    case 12:
        std::cout << "Senior\n";
        break;
    default:
        std::cout << "Invalid\n";
        break;
    }
}

#include <iostream>

int main() {

    int number = 9;

    switch (number) {

    case 1 :
        std::cout << "Bulbusaur\n";
        break;
    case 2 :
        std::cout << "Ivysaur\n";
        break;
    case 3 :
        std::cout << "Venusaur\n";
        break;
    case 4 :
        std::cout << "Charmander\n";
        break;
    case 5 :
        std::cout << "Charmeleon\n";
        break;
    case 6 :
        std::cout << "Charizard\n";
        break;
    case 7 :
        std::cout << "Squirtle\n";
        break;
    case 8 :
        std::cout << "Wartortle\n";
        break;
    case 9 :
        std::cout << "Blastoise\n";
        break;
    default :
        std::cout << "Unknown\n";
        break;

    }

}