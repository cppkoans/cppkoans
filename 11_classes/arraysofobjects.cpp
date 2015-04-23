#include <iostream>

class Box
{
private:
    double length {1.0};
    double width {1.0};
    double height {1.0};

public:
    Box(double lv, double wv, double hv) : length {lv}, width {wv}, height {hv}
    {
        std::cout << "Box constructor 1 called." << std::endl;
    }

    Box(double side) : Box{side, side, side}
    {
        std::cout << "Box constructor 2 called." << std::endl;
    }

    Box()
    {
        std::cout << "No-arg Box constructor called." << std::endl;
    }

    Box(const Box& box) : length {box.length}, width {box.width}, height {box.height}
    {
        std::cout << "Box copy constructor called." << std::endl;
    }

    double volume() const
    {
        return length * width * height;
    }
};

int main()
{
    const Box box1 {2.0, 3.0, 4.0};
    Box box2 {5.0};
    std::cout << "box1 volume  = " << box1.volume() << std::endl;
    std::cout << "box2 volume  = " << box2.volume() << std::endl;

    Box box3 {box2};
    std::cout << "box3 volume = " << box3.volume() << std::endl;

    Box boxes[6] {box1, box2, box3, Box {2.0}};
    std::cout << "There will be 6 box objects in the boxes array: " << sizeof(boxes)/sizeof(boxes[0])<< std::endl;
    std::cout << boxes[6].volume() << std::endl;

    return 0;
}
