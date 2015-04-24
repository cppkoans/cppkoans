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

Box* Box::setLength(double lv)
{
    if (lv > 0) length = lv;
    return this;
}

Box* Box::setWidth(double wv)
{
    if (wv > 0) width = wv;
    return this;
}

Box* Box::setHeight(double hv)
{
    if (hv > 0) height = hv;
    return this;
}
