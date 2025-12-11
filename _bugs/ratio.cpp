/*
 * ratio.cpp (BUG FIXED)
 * Calculate ratio between two dimensions
 * Original bug: Integer division truncated result to 0
 * Fixed: Cast to double for proper decimal division
 */

#include <iostream>

int main() {

    int width = 20;
    int length = 30;

    double ratio = static_cast<double>(width) / length;

    std::cout << ratio << "\n";

    return 0;
}