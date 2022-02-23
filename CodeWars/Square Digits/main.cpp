// Include pre-processor directives
#include <iostream>
#include "square_digits.h"

// Main program
int main() {
    int num = 4114;
	int squared_num = square_digits(num);
    std::cout << squared_num << std::endl;	

    // Return 0 for succesful program execution
	return 0;
}