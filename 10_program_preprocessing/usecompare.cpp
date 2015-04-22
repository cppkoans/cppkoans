#include <iostream>
#include <vector>
#include "compare.h"

using compare::max;
using compare::min;

int main()
{
    std::vector<double> data {1.5, 4.6, 3.1, 1.1, 3.8, 2.1};
    std::cout << "Minimum value is " << min(data) << std::endl;
    std::cout << "Maximum value is " << max(data) << std::endl;

    return 0;
}
