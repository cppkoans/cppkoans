#include <iostream>
#include <string>
#include "data.h"

namespace data
{
    extern const double pi;
    extern const std::string days[];
}

int main()
{
    std::cout << "pi has the value " << data::pi << std::endl;
    std::cout << "The second day of the week is " << data::days[1] << std::endl;
}
