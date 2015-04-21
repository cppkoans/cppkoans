#include <iostream>

// we specify `const` to make sure that code in our function
// does not accidentally modify elements of our array
double average(const double* array, size_t count);

int main()
{
    double values[] {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    std::cout << "Average = " << average(values, (sizeof values)/(sizeof values[0])) << std::endl;
}

double average(const double* array, size_t count)
{
    double sum {};
    for (size_t i {}; i < count; ++i)
        sum += *array++;    // Sum array elements

    return sum / count;
}
