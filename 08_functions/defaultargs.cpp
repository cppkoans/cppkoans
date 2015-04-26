#include <iostream>
#include <string>
using std::string;

// we specify the default message "Program Error"
// in our function prototype
void show_error(const string& message = "Program Error");

int main()
{
    show_error();

    show_error("Custom Error Message");

    return 0;
}

void show_error(const string& message)
{
    std::cout << message << std::endl;
}
