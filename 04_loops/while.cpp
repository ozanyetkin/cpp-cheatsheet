#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    while (i < 5)
    {
        cout << i << "\n";
        i++;
    }

    int password;

    while (password != 1234)
    {

        std::cout << "Try again: ";
        std::cin >> password;
    }

    return 0;
}


#include <iostream>

int main() {

    int guess;

    int tries = 0;

    std::cout << "I have a number 1-10.\n";
    std::cout << "Please guess it: ";
    std::cin >> guess;

    // Write a while loop here:

    while (guess != 8 && tries < 50) {
        std::cout << "Wrong guess, try again: ";
        std::cin >> guess;

        tries++;
    }



    if (guess == 8) {

        std::cout << "You got it!\n";

    }

}

#include <iostream>

int main() {

    int i = 0;
    int square = 0;

    // Write a while loop here:


    while (i < 10) {
        std::cout << i << "\t" << i * i << "\n";
        i++;
    }
    
}