#include <iostream>
using namespace std;

int main()
{
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int getArrayLength = sizeof(myNumbers) / sizeof(int);
    cout << getArrayLength;

    for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++)
    {
        cout << myNumbers[i] << "\n";
    }

    for (int i : myNumbers)
    {
        cout << i << "\n";
    }
    return 0;
}
