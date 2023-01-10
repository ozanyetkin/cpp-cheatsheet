#include <iostream>
using namespace std;

int main()
{
    int time = 20;
    if (time < 18)
    {
        cout << "Good day.";
    }
    else
    {
        cout << "Good evening.";
    }

    // Shorthand if else
    int time = 20;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result;
    
    return 0;
}
