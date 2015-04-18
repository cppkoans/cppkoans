#include <iostream>
#include <iomanip>
#include <vector>
using std::vector;

int main()
{
    vector<double> x;
    double temp {};

    while (true)
    {
        std::cout << "Enter a non-zero value, or 0 to end: ";
        std::cin >> temp;
        if (!temp) {
            break;
        }

        x.push_back(temp);
    }

    return 0;
}
