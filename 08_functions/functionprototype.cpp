#include <iostream>
#include <iomanip>

// our actual function is below main(), so we create a function prototype here so compilation can proceed without errors.
double power(double x, int n);

int main()
{
    // Calculate powers of 8 from -3 to +3
    for (int i {-3}; i <= 3; ++i)
        std::cout << std::setw(10) << power(8.0, i);

    std::cout << std::endl;

    return 0;
}

double power(double x, int n)
{
    double result {1.0};
    if (n >= 0)
        for (int i {}; i < n; ++i)
            result *= x;
    else
        for (int i {}; i < -n; ++i)
            result /= x;
    return result;
}
