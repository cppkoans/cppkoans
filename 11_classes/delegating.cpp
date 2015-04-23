#include <iostream>

class Box
{
private:
    double length {1.0};
    double width {1.0};
    double height {1.0};

public:
    Box(double lv, double wv, double hv);
    Box(double side);
    Box() {};

    double volume();
};

Box::Box(double lv, double wv, double hv) : length {lv}, width {wv}, height {hv}
{
    std::cout << "Box constructor 1 called." << std::endl;
}

// This second constructor calls the first constructor.
// we call this a delegating constructor.
// Because it delegates the constructing to the first constructor.
Box::Box(double side) : Box {side, side, side}
{
    std::cout << "Box constructor 2 called." << std::endl;
}

double Box::volume()
{
    return length * width * height;
}

int main()
{
    Box firstBox {2.0};
    // notice that both constructors are called.
    // volume() method calls the Box(double side) constructor, which calls the Box(double lv, double wv, double hv) constructor
    std::cout << "Volume of box is " << firstBox.volume() << std::endl;

    return 0;
}
