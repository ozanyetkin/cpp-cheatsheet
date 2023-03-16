#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    for (int i = 0; i < 5; i++)
    {
        cout << i << " = " << cars[i] << "\n";
    }

    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers)
    {
        cout << i << "\n";
    }
    return 0;
}


#include <iostream>
#include <vector>

int main() {

    std::vector<double> delivery_order;

    delivery_order.push_back(8.99);
    delivery_order.push_back(3.75);
    delivery_order.push_back(0.99);
    delivery_order.push_back(5.99);

    // Calculate the total using a for loop:

    double total = 0.0;

    for (int i = 0; i < delivery_order.size(); i++) {
        total += delivery_order[i];
    }

    std::cout << total;

}