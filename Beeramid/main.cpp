#include <iostream>

int beeramid (int bonus, double price) {
    if (bonus <= 0 || bonus / price < 1) {
        return 0;
    }

    int beer_count = bonus / price;
    int levels_count = 0;

    while (beer_count >= (levels_count + 1) * (levels_count + 1)) {
        levels_count++;

        beer_count -= levels_count * levels_count;
    }

    return levels_count;
}

int main() {
    int bonus = 455;    // Money
    double price = 5;   // Price per beer

    // Compute complete levels in pyramid (1 + 4 + 9 + ...)
    int levels = beeramid(bonus, price);

    std::cout << levels << std::endl;

    return 0;
}