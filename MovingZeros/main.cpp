#include <vector>

std::vector<int> move_zeroes (const std::vector<int>& input) {
    std::vector<int> output;
    int counter = 0;

    for (int i : input) {
        if (i == 0) {
            counter++;
        } else {
            output.push_back(i);
        }
    }

    for (int j = 0; j < counter; j++) {
        output.push_back(0);
    }

    return output;
}

int main() {
    std::vector<int> input;
    input.push_back(1);
    input.push_back(0);
    input.push_back(3);
    input.push_back(4);
    input.push_back(0);

    

    return 0;
}