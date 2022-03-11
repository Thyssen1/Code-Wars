// Include pre-processor directives
#include <iostream>
#include <string>
#include <vector>
#include "tower.h"

// Main program
int main() {
    // Let user choose number of floors and build tower
    int nFloors;
    std::cout << "Choose number of floors: ";
    std::cin >> nFloors;
    std::vector<std::string> vec = towerBuilder(nFloors);

    for (auto it = vec.begin(); it < vec.end(); it++) {
        std::cout << *it << std::endl;
    }

    // Return 0 for succesful program execution
    return 0;
}