#include <iostream>
#include <vector>

template <typename T> T larger(T a, T b);   // function template prototype

// function template overloading with a plain function (of the same name)
long* larger(long* a, long* b);

// function template overloading with function template
template <typename T> T larger(const std::vector<T>& data);

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

    std::vector<unsigned int> values { 2u, 3u, 5u, 7u, 11u, 13u, 17u, 19u, 6u };
    std::cout << "Largest element is " << larger(values) << std::endl;

    return 0;
}

template <typename T>
T larger(T a, T b)
{
    return a > b ? a : b;
}

// function template overloading with function of the same name
// when arguments are pointers, the comparison will be
// done by value instead of by memory address
// via this function overload
long* larger(long* a, long* b)
{
    return *a > *b ? a : b;
}

// function template overloading with another function template
template <typename T>
T larger(const std::vector<T>& data)
{
    T result {data[0]};
    for (auto& value : data)
        if (value > result) result = value;

        return result;
}
