#include <vector>
#include "compare.h"

using std::vector;

double compare::max(const vector<double>& data)
{
    double result {data[0]};
    for (const auto value : data)
        if (result < value) result = value;
    return result;
}

double compare::min(const vector<double>& data)
{
    double result {data[0]};
    for (const auto value : data)
        if (result > value) result = value;
    return result;
}
