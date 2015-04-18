#include <iostream>
#include <stddef.h>

double first[6] {1.1, 2.8, 3.4, 3.7, 2.1, 2.3};
double second[6] {};

int main() {
    for (size_t i {}; i < 6; ++i) {
        second[i] = first[i];
        std::cout << second[i] << std::endl;
    }
    return 0;
};
