/*
 * recursion.cpp
 * Demonstrates recursive function calls
 * Example: Calculate sum of numbers from 1 to n using recursion
 * Key concept: Function calls itself with modified parameters until base case
 */

#include <iostream>
using namespace std;

int sum(int k)
{
    if (k > 0)
    {
        return k + sum(k - 1);
    }
    else
    {
        return 0;
    }
}

int main()
{
    int result = sum(10);
    cout << result;
    return 0;
}
