#include <iostream>
#include <stddef.h>
#include <iomanip>

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

    // for-loop with floating point values
    // setw from iomanip lines up our stdout prints neatly, vertically
    const double pi {3.14159265};
    for (double radius {2.5}; radius <= 20.0; radius += 2.5) {
        std::cout
            << "radius = " << std::setw(12) << radius
            << " area = " << std::setw(12) << pi * radius * radius
            << std::endl;
    }

    const size_t perline {3};
    size_t linecount {};
    // complication when we do floating point additions
    // our loop ends earlier than expected because 0.2 + 2.8 gives a value higher than 3.0!
    std::cout << "First loop using increment steps of 0.2 " << std::endl;
    for (double radius {0.2}; radius <= 3.0; radius += 0.2) {
        std::cout
            << std::fixed << std::setprecision(2)
            << " radius = " << std::setw(5) << radius
            << " area = " << std::setw(6) << pi * radius * radius;

        if (perline == ++linecount) {
            std::cout << std::endl;
            linecount = 0;
        }
    }

    std::cout << "\n" << std::endl;

    std::cout << "Second loop using increment steps of .2 " << std::endl;
    for (double radius {0.2}; radius <= 3.0; radius += .2) {
        std::cout
            << std::fixed << std::setprecision(2)
            << " radius = " << std::setw(5) << radius
            << " area = " << std::setw(6) << pi * radius * radius
            << " delta to 3 = " << std::scientific << ((radius + 0.2) - 3.0) << std::endl;

        if (perline == ++linecount) {
            std::cout << std::endl;
            linecount = 0;
        }
    }

    return 0;
};
