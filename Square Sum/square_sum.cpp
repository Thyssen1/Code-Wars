// Include pre-processor directives
#include <vector>

// Read integers from vector, square each number and sum them
int square_sum (const std::vector<int>& numbers) {
    int sum = 0;
    for (auto it = numbers.begin(); it < numbers.end(); it++) {
        sum += (*it) * (*it);
    }

    return sum;
}