#include <iostream>
#include <iomanip>

double change_it(double value_to_be_changed);   // function prototype

int main()
{
    double it {5.0};
    double result {change_it(it)};

    std::cout << "After function execution, `it` doesn't change and is still = " << it
              << "\n Result returned is " << result << std::endl;
}

double change_it(double it)
{
    it += 10.0;     // copy of `it` gets mutated
    std::cout << "Within function, it = " << it << std::endl;
    return it;
}
