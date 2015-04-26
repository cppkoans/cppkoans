#include <iostream>

int main(int argc, char* argv[])
{
    // program that lists its command line arguments provided by user,
    // including the program name
    for (int i {}; i < argc; ++i)
        std::cout << argv[i] << std::endl;

}
