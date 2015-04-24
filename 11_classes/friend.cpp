#include <iostream>
#include <memory>
#include "box.h"

int main()
{
    Box box1 {2.2, 1.1, 0.5};       // Arbitrary box
    Box box2;                       // Default box
    auto pBox3 = std::make_shared<Box>(15.0, 20.0, 8.0);    // Box on the heap

    std::cout << "Volume of box1 = " << box1.volume() << std::endl;
    std::cout << "Surface area of box1 = " << surfaceArea(box1) << std::endl;
    std::cout << "Volume of box2 = " << box2.volume() << std::endl;
    std::cout << "Surface area of box2 = " << surfaceArea(box2) << std::endl;
    std::cout << "Volume of box3 = " << pBox3->volume() << std::endl;
    std::cout << "Surface area of box3 = " << surfaceArea(*pBox3) << std::endl;

    return 0;
}
