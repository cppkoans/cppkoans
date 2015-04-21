#include <iostream>
#include "scopeextern.h"

// external variable as defined in scopeextern.h
extern int shared_value;

// global variables
long count1 {999L};
double count2 {3.14};
int count3;

int main()
{ // function scope starts here

    std::cout << "Value of external shared_value = " << shared_value << std::endl;

    int count1 {10};    // Hides global count1
    int count3 {50};    // Hides global count3

    std::cout << "Value of outer count1 = " << count1 << std::endl;
    std::cout << "Value of global count1 = " << ::count1 << std::endl;
    std::cout << "Value of global count2 = " << ::count2 << std::endl;

    {   // new block scope starts here
        int count1 {20};    // Hides outer count1
        int count2 {30};    // Hides global count2
        std::cout << "\nValue of inner count1 = " << count1 << std::endl;
        std::cout << "Value of global count1 = " << ::count1 << std::endl;
        std::cout << "Value of inner count2 = " << count2 << std::endl;
        std::cout << "Value of global count2 = " << ::count2 << std::endl;

        count1 = ::count1 + 3;  // This sets inner count1 to global count1 + 3
        ++::count1;             // This mutates the global count1
        std::cout << "\nValue of inner count1 = " << count1 << std::endl;
        std::cout << "Value of global count1 = " << ::count1 << std::endl;
        count3 += count2;       // Increments outer count3 by inner count2
    }

    std::cout << "\nValue of outer count1 = " << count1 << std::endl;
    std::cout << "Value of outer count3 = " << count3 << std::endl;
    std::cout << "Value of global count3 = " << ::count3 << std::endl;

    std::cout << count2 << std::endl;   // This is global count2

    // variables with static storage duration will exist for the life of a program
    // even thought its defined within a block and only available from within the block or its sub-blocks
    // by default, it initializes to 0
    static int count;
    std::cout << "Static variable count has value " << count << std::endl;

    return 0;
} // function scope ends here
