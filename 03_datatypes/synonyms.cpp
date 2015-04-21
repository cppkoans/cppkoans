#include <iostream>
#include <map>

int main()
{
    typedef long BigOnes;   // defines BigOnes as a type alias
    BigOnes mynum {};       // defines & initializes as type long

    mynum = 100;
    std::cout << mynum << std::endl;

    long mynum2 = 101;
    std::cout << mynum2 << std::endl;

    using Contact = long;
    using PhoneBook = std::map<std::shared_ptr<Contact>, std::string>;

    std::shared_ptr<Contact> c1 = std::make_shared<Contact>(90901299L);
    std::cout << c1 << std::endl;

    std::string name = "Calvin";
    std::cout << name << std::endl;

    PhoneBook phonebook;
    phonebook[c1] = name;

    std::cout << "Number of key-value pairs in phonebook: " << phonebook.size() << std::endl;

    return 0;
}
