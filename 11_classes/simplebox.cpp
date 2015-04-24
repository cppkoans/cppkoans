#include <iostream>

class Box
{
private:
    double length {1.0};
    double width {1.0};
    double height {1.0};

public:
    double volume()
    {
        return length * width * height;
    }
};

int main()
{
    Box myBox;
    std::cout << "Volume of myBox is " << myBox.volume() << std::endl;
}
