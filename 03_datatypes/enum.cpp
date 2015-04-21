#include <iostream>
#include <iomanip>
using std::setw;

int main()
{
    // Usage of enum class in C++
    enum class Day { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday }
               yesterday { Day::Monday },
               today { Day::Tuesday },
               tomorrow { Day::Wednesday };

    Day poets_day{ Day::Friday };

    enum class Punctuation : char { Comma = ',', Exclamation = '!', Question = '?' };

    Punctuation ch{ Punctuation::Comma };

    std::cout << "yesterday's value is " << static_cast<int>(yesterday) << static_cast<char>(ch) << std::endl;
    std::cout << "today's value is " << static_cast<int>(today) << std::endl;
    std::cout << "tomorrow's value is " << static_cast<int>(tomorrow) << std::endl;
    std::cout << "poets' day's value is " << static_cast<int>(poets_day) << static_cast<char>(Punctuation::Exclamation) << std::endl;

    today = Day::Thursday;
    ch = Punctuation::Question;
    tomorrow = poets_day;

    std::cout << "Is today's value(" << static_cast<int>(today) << ") the same as poets day(" << static_cast<int>(poets_day) << ")" << static_cast<char>(ch) << std::endl;

}
