#include <iostream>
#include <string>
using std::string;

int main()
{
    string empty;
    std::cout << "This is an empty string: " << empty << std::endl;

    // literal
    string proverb {"Many a mickle makes a muckle"};
    std::cout << "This is a string literal: " << proverb << std::endl;

    // substring of literal
    string part_literal {"Least said soonest mended.", 5};
    std::cout << "This is a string literal substring: " << part_literal << std::endl;

    // repeating a literal
    string sleeping (6, 'z');
    std::cout << "This is a repeated literal: " << sleeping << std::endl;

    // substring truncation of literal
    // start at the 8th element, taking the 6 elements thereafter.
    string phrase {proverb, 7, 6};
    std::cout << "Substring truncated literal is: " << phrase << std::endl;

    return 0;
}
