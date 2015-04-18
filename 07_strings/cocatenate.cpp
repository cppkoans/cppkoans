#include <iostream>
#include <string>
using std::string;

int main()
{
    string first;
    string second;

    std::cout << "Enter your first name: ";
    std::cin >> first;

    std::cout << "Enter your second name: ";
    std::cin >> second;

    string sentence {"Your full name is "};
    sentence += first + " " + second + ".";

    std::cout << sentence << std::endl;
    std::cout << "The string contains " << sentence.length() << " characters." << std::endl;
}
