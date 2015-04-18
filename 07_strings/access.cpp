#include <iostream>
#include <string>
#include <locale>
using std::string;

int main()
{
    string text;
    std::cout << "Enter a line of text:\n";
    std::getline(std::cin, text);
    // we can get the line until we hit a specific delimiter, for example:
    // std::getline(std::cin, text, '#');
    // this will get all text until we hit '#' in the line.

    int vowels {};
    int consonants {};
    for (size_t i {}; i < text.length(); ++i) {
        if (std::isalpha(text[i])) { // check for a letter
            switch (std::tolower(text[i]))
            {
                case 'a': case 'e': case 'i': case 'o': case 'u':
                    ++vowels;
                    break;

                default:
                    ++consonants;
                    break;
            }
        }
    }

    std::cout << "Your input contained " << vowels << " vowels and "
              << consonants << " consonants." << std::endl;

    vowels = 0;
    consonants = 0;
    // we can use a range-based for-loop too
    for (const auto& ch: text) {
        if (isalpha(ch)) {
            switch (tolower(ch)) {
                case 'a': case 'e': case 'i': case 'o': case 'u':
                    ++vowels;
                    break;

                default:
                    ++consonants;
                    break;
            }
        }
    }

    std::cout << "Your input contained " << vowels << " vowels and "
              << consonants << " consonants." << std::endl;
}
