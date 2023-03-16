#include <iostream>
using namespace std;

int main()
{
    int time = 22;
    if (time < 10)
    {
        cout << "Good morning.";
    }
    else if (time < 20)
    {
        cout << "Good day.";
    }
    else
    {
        cout << "Good evening.";
    }
    return 0;
}


#include <iostream>

int main() {

    double ph = 4.6;

    // Write the if, else if, else here:

    if (ph > 7) {
        std::cout << "Basic";
    }
    else if (ph < 7) {
        std::cout << "Acidic";
    }
    else {
        std::cout << "Neutral";
    }

}