#include <iostream>
#include <stddef.h>

// it is cleaner to use a constant `size` to fix-size our arrays
// leaving 6 everywhere in our source code makes it more brittle should we make careless mistakes
const size_t size {6};
double first[size] {1.1, 2.8, 3.4, 3.7, 2.1, 2.3};
double second[size] {};

int main() {
    for (size_t i {}; i < size; ++i) {
        second[i] = first[i];
        std::cout << second[i] << std::endl;
    }

    // this allows us to access i outside the for-loop's scope
    size_t i {};
    // we can also not write i = 0 below as size_t i {} has
    // initialized i as zero already
    for (i = 0; i < size; ++i) {
        std::cout << second[i] << std::endl;
    }
    std::cout << i << std::endl;

    return 0;
};
