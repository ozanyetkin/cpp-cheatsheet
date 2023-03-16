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

#include <iostream>

int main() {

    int hunger = true;
    int anger = true;

    // Write the code below:
    if (hunger && anger) {
        std::cout << "Hangry";
    }

}

#include <iostream>

int main() {

    int day = 6;

    // Write the code below:
    if (day == 6 || day == 7) {
        std::cout << "Weekend";
    }

}

#include <iostream>

int main() {
  
  bool logged_in = false;
  
  // Write the code below:
  if (!logged_in)
  {
    std::cout << "Try again";
  }
  
}