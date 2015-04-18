#include <iostream>

int values [] {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
int total {};

int main()
{
    for (int x : values) {
        total += x;
    }
    std::cout << "The total from our values range is " << total << std::endl;

    total = 0;
    // we don't need to declare x's type, we can just use auto for our compiler to infer the type
    for (auto x : values) {
        total += x;
    }
    std::cout << "The total from our values range is " << total << std::endl;

    return 0;
}
