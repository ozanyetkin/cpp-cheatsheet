#include <iostream>

int main()
{

    // Initialize variables
    double distm;
    double distk;

    // Ask the user
    std::cout << "Please enter distance in miles: ";
    std::cin >> distm;

    distk = distm * 1.609;

    std::cout << "The distance is " << distk << " in kilometers.\n";

    // Initialize variables
    double weighte;
    double weightm;

    // Ask the user
    std::cout << "Please enter the weight: ";
    std::cin >> weighte;

    weightm = weighte * 0.38;

    std::cout << "The weight is " << weightm << " in Mars.\n";
}