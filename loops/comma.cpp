#include <iostream>

int i {1};
int value1 {1};
int value2 {1};
int value3 {1};

int main()
{
    std::cout << value1 << std::endl;
    std::cout << value2 << std::endl;
    std::cout << value3 << std::endl;
    // value1 will be incremented by 2 to become 3
    // value2 will be incremented by 3 to become 4
    // value3 will be incremented by 4 to become 5
    std::cout << (value1 += ++i, value2 += ++i, value3 += ++i) << std::endl;

    return 0;
}
