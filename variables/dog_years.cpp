#include <iostream>

int main()
{

    // Initialize a dog age
    int dog_age = 7;

    int early_years = 21;
    int later_years = (dog_age - 2) * 4;
    int human_years = early_years + later_years;

    std::cout << "My name is Tarcin! Ruff ruff, I am " << dog_age << " years old in human years.\n";
}