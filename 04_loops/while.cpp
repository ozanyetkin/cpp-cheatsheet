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
