#include <iostream>
#include <array>


int main()
{
    // Containers of the form std::array<T,N>
    // which is an array template from the C++'s STL (Standard Template Library)

    std::array<double,100> values;
    values.fill(3.1415926);
    for (auto value : values) {
        std::cout << value << std::endl;
    }

    double total {};
    for (auto value : values) {
        total += value;
    }
    std::cout << "The total is " << total << std::endl;

    total = 0;
    for (size_t i {}; i < values.size(); ++i) {
        total += values.at(i);
    }
    std::cout << "The total number of elements in values is " << values.size() << std::endl;
    std::cout << "The total is " << total << std::endl;

    std::array<double,4> a {1.0, 2.0, 3.0, 4.0};
    std::array<double,4> b {1.0, 2.0, 3.0, 4.0};
    std::array<double,4> c {2.0, 1.0, 3.0, 4.0};

    if (a == b) std::cout << "a and b are equal" << std::endl;
    if (b != c) std::cout << "b and c are not equal" << std::endl;
    if (b < c) std::cout << "b is less than c" << std::endl;
    if (c > b) std::cout << "c is greater than b" << std::endl;

    return 0;
}
