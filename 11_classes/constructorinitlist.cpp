#include <iostream>

class Box
{
private:
    double length {1.0};
    double width {1.0};
    double height {1.0};

public:
    Box(double lv, double wv, double hv);
    Box();

    double volume();
};

Box::Box(double lv, double wv, double hv) : length {lv}, width {wv}, height {hv}
{
    std::cout << "Box constructor called." << std::endl;
}

double Box::volume()
{
    return length * width * height;
}

int main()
{
    Box firstBox {80.0, 50.0, 40.0};
    std::cout << "Volume of firstBox is " << firstBox.volume() << std::endl;
}
