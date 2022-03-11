#include <string>
#include <map>
#include <iostream>
#include <iomanip>
#include <sstream>

const std::map<int, char> dec_to_hex = {
	{10, 'A'},
	{11, 'B'},
	{12, 'C'},
	{13, 'D'},
	{14, 'E'},
	{15, 'F'}
};

/* Convert integer from {1,..., 15} to hexadecimal */
char decimal_to_hex(int decimal) {
	char* hex = new char;
	*hex = 'w';

	if (decimal < 0 || decimal > 16) {
		// Invalid decimal
		return *hex;
	}
	else {
		if (0 <= decimal && decimal <= 9) {
			*hex = '0' + decimal;
		} else {
			*hex = dec_to_hex.at(decimal);
		}
	}

	return *hex;
}

std::string RGB_to_Hex(int r, int g, int b) {
	std::string hex;
	std::string temp;
	int list[3] = { r, g, b };
 
	for (size_t i = 0; i < 3; i++) {
		if (list[i] < 0) {
			hex.push_back('0');
			hex.push_back('0');
		} else if (list[i] > 255) {
			hex.push_back('F');
			hex.push_back('F');
		} else {
			do {
				temp.push_back(decimal_to_hex(list[i] % 16));
				list[i] /= 16;
			} while (list[i] / 16 != 0);
			temp.push_back(decimal_to_hex(list[i] % 16));

			for (auto it = temp.rbegin(); it < temp.rend(); it++) {
				hex.push_back(*it);
			}

			temp.clear();
		}
	}

	return hex;
}

std::string rgb_to_hex(int r, int g, int b) {
	std::ostringstream oss;

	oss << std::uppercase << std::setfill('0') << std::hex
		<< std::setw(2) << (r < 0 ? 0 : r > 255 ? 255 : r)
		<< std::setw(2) << (g < 0 ? 0 : g > 255 ? 255 : g)
		<< std::setw(2) << (b < 0 ? 0 : b > 255 ? 255 : b);
	return oss.str();
}

int main() {
	int r = -25;
	int g = 275;
	int b = 125;

	std::string hex = RGB_to_Hex(r, g, b);

	std::cout << hex << std::endl;

	std::cout << std::uppercase << std::hex << std::setw(2) << 255 << std::endl;

	return 0;
}