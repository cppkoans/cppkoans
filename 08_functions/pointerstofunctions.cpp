#include <iostream>

long sum(long a, long b);
long product(long a, long b);

int main()
{
    // pointer to a function
    // that accepts two long arguments
    // and returns one long value
    long(*pDo_It)(long, long) {};

    pDo_It = product;
    std::cout << "3 * 5 = " << pDo_It(3, 5) << std::endl;

    pDo_It = sum;
    std::cout << "3 + 5 = " << pDo_It(3, 5) << std::endl;

    return 0;
}

long sum(long a, long b)
{
    return a + b;
}

long product(long a, long b)
{
    return a * b;
}
