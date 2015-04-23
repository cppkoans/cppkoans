#include <iostream>

class Cube
{
public:
    double side;

    explicit Cube(double side);
    double volume();
    bool compareVolume(Cube aCube);
};

Cube::Cube(double len) : side {len}
{
    std::cout << "Cube constructor called." << std::endl;
}

double Cube::volume()
{
    return side * side * side;
}

bool Cube::compareVolume(Cube aCube)
{
    return volume() > aCube.volume();
}

int main()
{
    Cube box1 {7.0};
    Cube box2 {3.0};

    if (box1.compareVolume(box2))
        std::cout << "box1 is larger than box2." << std::endl;
    else
        std::cout << "box1 is less than or equal to box2" << std::endl;

    std::cout << "volume of box1 is " << box1.volume() << std::endl;
    // implicit conversion of 50.0 to a cube object using the constructor gives an erroneous result.
    // we disable such implicit conversions by stating the explicit keyword
    //if (box1.compareVolume(50.0))
        //std::cout << "Volume of box1 is greater than 50" << std::endl;
    //else
        //std::cout << "Volume of box1 is less than or equal to 50" << std::endl;
}
