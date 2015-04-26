#include <iostream>

template <typename T> T larger(T a, T b);   // function template prototype

// function template overloading
long* larger(long* a, long* b);

int main()
{
    // Using our template function, we can generate functions which handles
    // the correct type at compile-time.

    double a = 1.5, b = 2.5;
    std::cout << "Larger of " << a << " and " << b << " is " << larger(a, b) << std::endl;

    int c = 1, d = 2;
    std::cout << "Larger of " << c << " and " << d << " is " << larger(c, d) << std::endl;

    long e {8L}, f {9L};
    std::cout << "Larger of " << e << " and " << f << " is " << larger(e, f) << std::endl;

    std::cout << "Larger of " << e << " and " << f << " is " << *larger(&e, &f) << std::endl;

    return 0;
}

template <typename T>
T larger(T a, T b)
{
    return a > b ? a : b;
}

// function template overloading
// when arguments are pointers, the comparison will be
// done by value instead of by memory address
// via this function overload
long* larger(long* a, long* b)
{
    return *a > *b ? a : b;
}
