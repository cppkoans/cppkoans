#include <iostream>
#include <iomanip>


int main()
{
    int unit_price {295};
    int count {};

    int* pcount {&count};   // pointer to count
    std::cout << "Enter the number of items you want: ";
    std::cin >> *pcount;
    std::cout << "The unit price is " << std::fixed << std::setprecision(2)
              << "$" << unit_price/100.0 << std::endl;
}
