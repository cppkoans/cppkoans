#include <iostream>

unsigned short number {16387U};

// bitwise shift operation
// left shift operator << moves the bits by 2 towards the left
// so, 0100000000000011 (16387)
// becomes 0000000000001100 (which is 12)
// right shift operator >> moving bits by 2 towards the right
// so, 0100000000000011 (16387)
// becomes 0001000000000000 (which is 4096)
unsigned short result1 {static_cast<unsigned short>(number << 2)};
unsigned short result2 {static_cast<unsigned short>(number >> 2)};

int main()
{
    std::cout << number << std::endl;   // 16387
    std::cout << result1 << std::endl;   // 12
    std::cout << result2 << std::endl;   // 4096

    // This mutates `number` directly
    std::cout << (number <<= 2) << std::endl;
    std::cout << number << std::endl;

    return 0;
}
