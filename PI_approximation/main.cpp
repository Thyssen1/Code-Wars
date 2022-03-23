#include <cmath>
#include <cstdio>
#include <string>
#include <iomanip>
#include <sstream>
#include <iostream>
#define M_PI 3.14159265358979323846

class PiAPprox {
    public:
    std::string iterPi(double epsilon) {
        double approximation = 0.0;
        int i = 0;

        while(approximation - M_PI > epsilon || M_PI - approximation > epsilon) {
            approximation += 4.0 / (2*i+1) * pow(-1, i);
            i++;
        }

        char buffer[13];
        sprintf_s(buffer, "%0.10f", approximation);
        std::string result = "[";
        result.append(std::to_string(i));
        result.append(", ");
        result.append(buffer);
        result.append("]");

        return result;
    }

    std::string iterPi_2(double epsilon) {
        std::ostringstream ss;
        double approximation = 0.0;
        int i = 0;
        double sign = 1.0;
        while (std::abs(approximation - M_PI) >= epsilon) {
            approximation += (4 * sign) / (2*i + 1);
            i++;
            sign = -sign;
        }

        ss << "[" << i << ", " << std::setprecision(11) << approximation << "]";

        return ss.str();
    }
};

int main() {
    PiAPprox p;
    double epsilon = 0.01;
    std::string str = p.iterPi_2(epsilon);

    std::cout << str << "\n";

    return 0;
}