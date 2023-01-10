#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int y = 3;
    cout << (x > 3 && x < 10); // returns true (1) because 5 is greater than 3 AND 5 is less than 10

    int coffee = 5;
    int donut = 0;
    bool tired = false;

    if (coffee > 0 && donut > 1)
    {
        // Code runs if both are true
    }

    if (coffee > 0 || donut > 1)
    {
        // Code runs if either is true
    }

    if (!tired)
    {
        // Code runs if tired is false
    }

    return 0;
}
