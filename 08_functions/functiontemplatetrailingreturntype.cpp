#include <iostream>
#include <vector>

template <typename Treturn, typename T1, typename T2>
Treturn vector_product(const std::vector<T1>& data1, const std::vector<T2>& data2);

int main()
{

    std::vector<int> data1 {1, 2, 4};
    std::vector<int> data2 {2, 2, 2};

    auto result = vector_product<std::vector<int>>(data1, data2);

    std::cout << "The elements in the vector product are: " << std::endl;
    for (auto i : result)
        std::cout << i << std::endl;

    return 0;
}

template <typename Treturn, typename T1, typename T2>
Treturn vector_product(const std::vector<T1>& data1, const std::vector<T2>& data2)
{
    Treturn sum {};

    int count1 = data1.size();
    int count2 = data2.size();
    if (count1 != count2) return sum;    // guard against unequal vectors, return empty vector

    int count = count1;
    for (size_t i {}; i < count; ++i)
        sum.push_back(data1[i] * data2[i]);

    return sum;
}
