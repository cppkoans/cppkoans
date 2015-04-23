#include <iostream>

class Box
{
private:
    double length {1.0};
    double width {1.0};
    double height {1.0};

public:
    Box(double lengthValue, double widthValue, double heightValue);
    Box();

    double volume();
};

Box::Box(double lengthValue, double widthValue, double heightValue)
{
    std::cout << "Box constructor is called" << std::endl;
    length = lengthValue;
    width = widthValue;
    height = heightValue;
}

Box::Box() {}

double Box::volume()
{
    return length * width * height;
}

int main()
{
    Box firstBox {80.0, 50.0, 40.0};
    std::cout << "Volume of firstBox is " << firstBox.volume() << std::endl;
}
