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

    double volume()
    {
        return length * width * height;
    }

    // provide access to private members

    // getters
    double getLength() { return length; }
    double getWidth() { return width; }
    double getHeight() { return height; }

    // setters
    void setLength(double lv) { if (lv > 0) length = lv; }
    void setWidth(double wv) { if (wv > 0) width = wv; }
    void setHeight(double hv) { if (hv > 0) height = hv; }
};

int main()
{
    // initialize
    Box firstBox {3.0, 4.0, 5.0};

    // getting
    std::cout << "firstBox dimensions are " << firstBox.getLength() << " by " << firstBox.getWidth() << " by " << firstBox.getHeight() << std::endl;

    std::cout << "Volume, as expected, is " << firstBox.volume() << std::endl;

    // setting
    firstBox.setLength(5.0);
    firstBox.setWidth(5.0);

    std::cout << "After updating length and width, the volume is now " << firstBox.volume() << std::endl;

    return 0;
}
