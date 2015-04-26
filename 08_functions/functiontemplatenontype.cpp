#include <iostream>

template <typename T, int upper, int lower> bool is_in_range(T value);

int main()
{
    double value {100.0};
    std::cout << is_in_range<double, 500, 0>(value) << std::endl;

    return 0;
}

template <typename T, int upper, int lower>
bool is_in_range(T value)
{
    return (value <= upper) && (value >= lower);
}
