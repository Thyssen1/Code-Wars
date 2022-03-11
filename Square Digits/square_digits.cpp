// Include pre-processor directives
#include <vector>

// Square digitis function
int square_digits(int num) {
	// Define helper variables
	int num_copy = num;
	int squared_num = 0;
	int digit = 0;
	int factor = 1;

	// Extract digits build number from squared digits
	while (num_copy > 0) {
		digit = num_copy % 10;
		squared_num += factor * digit * digit;
		factor *= digit <= 3 ? 10 : 100;
		num_copy /= 10;
	}

	/*
	int squared_num = 0;
	int x = num;
	std::vector<int> digits;

	// Push digits into vector
	while (x / 10 != 0) {
		digits.push_back(x % 10);

		x /= 10;
	}
	digits.push_back(x % 10);

	// Reset helper variable and construct integer from squared digits
	x = 0;
	for (auto it = digits.rbegin(); it < digits.rend(); it++) {
		x = (*it) * (*it);

		if (x > 10) {
			squared_num *= 100;
			squared_num += (*it) * (*it);
		}
		else {
			squared_num *= 10;
			squared_num += (*it) * (*it);
		}
	}
	*/

	return squared_num;
}