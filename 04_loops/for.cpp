#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << i << "\n";
    }

    for (int i = 0; i <= 10; i = i + 2)
    {
        cout << i << "\n";
    }
    return 0;
}

#include <iostream>

int main() {

    for (int i = 0; i < 10; i++) {

        std::cout << "I will not throw paper airplanes in class.\n";

    }

}

#include <iostream>

int main() {

    // Write a for loop here:


    for (int i = 99; i > 0; i--)
    {
        std::cout << i << "bottles of pop on the wall\n";
        std::cout << "Take one down and pass it around\n";
        std::cout << i - 1 << "bottles of pop on the wall\n";
    }

}