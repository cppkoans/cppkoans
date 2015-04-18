#include <iostream>
#include <stddef.h>

double first[6] {1.1, 2.8, 3.4, 3.7, 2.1, 2.3};
double second[6] {};

int main() {
    for (size_t i {}; i < 6; ++i) {
        second[i] = first[i];
        std::cout << second[i] << std::endl;
    }

    // this allows us to access i outside the for-loop's scope
    size_t i {};
    // we can also not write i = 0 below as size_t i {} has
    // initialized i as zero already
    for (i = 0; i < 6; ++i) {
        std::cout << second[i] << std::endl;
    }
    std::cout << i << std::endl;

    return 0;
};
