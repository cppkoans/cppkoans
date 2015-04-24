#include <iostream>
#include "Box.h"

int main()
{
    Box aBox {10.0, 15.0, 25.0};
    std::cout << "Volume is initially " << aBox.volume() << std::endl;

    // chaining our mutator function is possible because
    // each mutator function returns our pointer `this`
    aBox.setLength(20.0)->setWidth(40.0)->setHeight(10.0);
    std::cout << "Volume is now " << aBox.volume() << std::endl;

    return 0;
}
