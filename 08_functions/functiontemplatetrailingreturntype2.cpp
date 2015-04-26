#include <iostream>
#include <vector>

template <typename T1, typename T2>
auto vector_product(const std::vector<T1>& data1, const std::vector<T2>& data2) -> std::vector<decltype(data1[0] * data2[0])>;

int main()
{

    std::vector<int> data1 {1, 2, 4};
    std::vector<int> data2 {2, 2, 2};

    // now, when we use our trailing return type function template,
    // we do not have to specify our return type
    auto result = vector_product(data1, data2);

    std::cout << "The elements in the vector product are: " << std::endl;
    for (auto i : result)
        std::cout << i << std::endl;

    return 0;
}

template <typename T1, typename T2>
auto vector_product(const std::vector<T1>& data1, const std::vector<T2>& data2) -> std::vector<decltype(data1[0] * data2[0])>
{
    std::vector<decltype(data1[0] * data2[0])> sum {};

    int count1 = data1.size();
    int count2 = data2.size();
    if (count1 != count2) return sum;    // guard against unequal vectors, return empty vector

    int count = count1;
    for (size_t i {}; i < count; ++i)
        sum.push_back(data1[i] * data2[i]);

    return sum;
}
