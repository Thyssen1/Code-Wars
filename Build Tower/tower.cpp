#include <string>
#include <vector>

std::vector<std::string> towerBuilder(int nFloors) {
    std::vector<std::string> v;
    if (nFloors <= 0) {
        return v;
    }

    for (int i = 1; i <= nFloors; i++) {
        v.push_back(std::string(nFloors - i, ' ') + std::string(2*i - 1, '*') + std::string(nFloors - i, ' '));
    }

    return v;
}