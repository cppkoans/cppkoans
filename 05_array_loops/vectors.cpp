#include <iostream>
#include <vector>


int main()
{
    // Containers of the form std::vector<T>

    // This has no space for elements allocated so memory will be allocated dynamically
    // when we add the first data item
    std::vector<double> values;
    values.push_back(2.31248);
    std::cout << "Number of elements in values: " << values.size() << std::endl;
    std::cout << "First element in values: " << values[0] << std::endl;

    // we can also create a vector container with a pre-defined number of elements
    std::vector<double> valuesList(20);
    std::cout << "Number of elements in valuesList: " << valuesList.size() << std::endl;

    std::vector<unsigned int> primes { 2u, 3u, 5u, 7u, 11u, 13u, 17u, 19u };
    std::cout << "The size is " << primes.size() << std::endl;
    std::cout << "The capacity is " << primes.capacity() << std::endl;

    return 0;
}
