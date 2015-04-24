#include <iostream>
#include "Box.h"

Box::Box(double lv, double wv, double hv) : length(lv), width(wv), height(hv)
{
    std::cout << "Box constructor called." << std::endl;
}

double Box::volume()
{
    //return length * width * height;
    return this->length * this->width * this->height;
}

double surfaceArea(const Box& aBox)
{
    return 2.0 * (aBox.length * aBox.width + aBox.length * aBox.height + aBox.height * aBox.width);
}
