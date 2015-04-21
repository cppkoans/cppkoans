#include <iostream>

signed int value {-104};

// 104 in binary in C++ is 110 1000
// To get -104, flip all the bits and add 1
// so, 0010111 + 1 =  01 1000
// represent the `-` bit, so 101 1000
//
// so, bitwise 2-to-right gives us 1110 0110, and we insert two 1s (and not two 0s) on the left side because we have a sign bit which is 1
// now, to convert it back to decimal, minus 1 and flip all the bits
// 1110 0110 - 1 = 0 1110 0101
// flip, 1 0001 1010
// The first 1 is the `-` bit.
// So 00011010 is of interest, which gives us 2^1 + 2^3 + 2^4 = 2 + 8 + 16 = 26
// which is -26

int main()
{
    std::cout << value << std::endl;
    std::cout << (value >>= 2) << std::endl;

    return 0;
}
