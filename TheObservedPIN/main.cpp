#include <string>
#include <vector>
#include <iostream>

// Compute Cartesian product of two vectors (sets)
std::vector<std::string> cartesian_product(const std::vector<std::string> &lhs, 
                                           const std::vector<std::string> &rhs) {
    std::vector<std::string> product;

    for (int l = 0; l < lhs.size(); ++l) {
        for (int r = 0; r < rhs.size(); ++r) {
            product.push_back(lhs[l] + rhs[r]);
        }
    }

    return product;
}

std::vector<std::string> get_pins(std::string observed) {
    if (observed.size() == 0) {
        return {};
    }

  std::vector<std::vector<std::string>> pattern = {
      {"0", "8"},
      {"1", "2", "4"},
      {"1", "2", "3", "5"},
      {"2", "3", "6"},
      {"1", "4", "5", "7"},
      {"2", "4", "5", "6", "8"},
      {"3", "5", "6", "9"},
      {"4", "7", "8"},
      {"0", "5", "7", "8", "9"},
      {"6", "8", "9"}
    };

    std::vector<std::string> ret;
    for (auto it = observed.begin(); it < observed.end(); it++) {
        pattern.at(0);
    }

    for (auto it = ret.begin(); it < ret.end(); it++) {
        std::cout << *it << "\n";
    }

  for (int s = 1; s < observed.size(); ++s)
  {
    int num = observed[s] - '0';
    ret = cartesian_product(ret, pattern[num]);
  }

  return ret;
}

int main() {
    std::vector<std::string> output = get_pins("369");

    /*
    for (auto it = output.begin(); it < output.end(); it++) {
        std::cout << *it << "\n";
    }
    */
    
    return 0;
}

/*
std::vector<std::string> get_pins(std::string observed) {
    std::string possible_digits [9] = { "124", "1235", "236", "1457", "24568", "3569", "478", "5789", "689" };
    std::vector<std::string> combinations;
    std::vector<std::string> digits;

    for (auto c : observed) {
        digits.push_back(possible_digits[std::atoi(&c) - 1]);
    }


    for (int i = 0; i < digits.size()-1; i++) {

        for (int p = 0; p < digits[i].size(); p++) {
            for (int q = 0; q < digits[i+1].size(); q++) {
                if (combinations.size() < p) {
                    combinations.push_back(&digits[p][0]);
                } else {
                }
            }
        }
    }

    return digits;
}

int main() {
    std::string observed = "123";
    
    std::vector<std::string> digits = get_pins(observed);

    for (auto it = digits.begin(); it < digits.end(); it++) {
        std::cout << *it << "\n";
    }

    return 0;
}
*/