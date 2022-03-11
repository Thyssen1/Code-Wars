// Include pre-processor directives
#include <iostream>
#include <vector>
#include "square_sum.h"

// Main program
int main() {
    // Define vector of integers
    std::vector<int> v;
    v.push_back(-1);
    v.push_back(2);
    v.push_back(5);

    int sum = square_sum(v);
    std::cout << sum << std::endl;

    // Return 0 for succesful program execution
    return 0;
}