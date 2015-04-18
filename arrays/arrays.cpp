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

    // We can ommit providing a constant size to our array if we initialize
    // it this way
    int values[] {2, 3, 4}; // directly equivalent to int values[3] {2, 3, 4}

    // size of array is number of bytes the array occupies, divided by the size
    // of the first element in the array
    std::cout << "There are " << sizeof(values)/sizeof(values[0])
        << " elements in the array."
        << std::endl;

    std::cout << "Our values array takes up " << sizeof(values)
        << " bytes"
        << std::endl;

    std::cout << "Each element takes up " << sizeof(values[0])
        << " bytes"
        << std::endl;

    // summing elements in our array
    int sum {};
    const size_t array_size = sizeof(values) / sizeof(values[0]);
    for (size_t i {}; i < array_size; ++i) {
        sum += values[i];
    }
    std::cout << "The sum is " << sum << std::endl;

    // Alternatively
    sum = 0;
    for (size_t i {}; i < array_size; sum += values[i++]);
    std::cout << "The sum is " << sum << std::endl;

    return 0;
};
