#include <iostream>

long zeros(long n) {
	long num = n;
	long counter = 0;
	
	do {
		counter += (num / 5);
		num /= 5;
	} while (num >= 5);

	return counter;
}

int main() {
	long num = 1000000000;
	std::cout << zeros(num);

	return 0;
}