#include <iostream>
#include <iomanip>

double power(double x, int n);

int main()
{
    for (int i {-3}; i <= 3; ++i)
        std::cout << std::setw(10) << power(8.0, i);

    std::cout << std::endl;
}

// recursive function to calculate x to the power n
double power(double x, int n)
{
    if (!n) return 1.0;                         // n is zero
    if (n > 0) return x * power(x, n - 1);      // n is positive
    return 1.0 / power(x, -n);                  // n is negative
}
