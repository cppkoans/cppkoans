#include <iostream>

class Box
{
private:
    double length {1.0};
    double width {1.0};
    double height {1.0};

public:
    // Constructor
    Box(double lengthValue, double widthValue, double heightValue)
    {
        std::cout << "Box constructor called." << std::endl;
        length = lengthValue;
        width = widthValue;
        height = heightValue;
    }
    Box() {}    // This allows us to use our default dimensions in private above if no
                // lengthValue, widthValue and heightValue are given at initialization
    double volume()
    {
        return length * width * height;
    }
};

int main()
{
    Box firstBox {80.0, 50.0, 40.0};
    double firstBoxVolume {firstBox.volume()};
    std::cout << "Volume of Box object is " << firstBoxVolume << std::endl;

    Box secondBox;
    std::cout << "Volume of the secondBox is " << secondBox.volume() << std::endl;

    return 0;
}
