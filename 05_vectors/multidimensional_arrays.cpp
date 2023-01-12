#include <iostream>
using namespace std;

int main()
{
    // Initializing an md array
    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}};

    cout << letters[0][2];

    // Changing the element in an md array
    letters[0][0] = "Z";
    cout << letters[0][0];

    // Looping through an md array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << letters[i][j] << "\n";
        }
    }
    return 0;
}
