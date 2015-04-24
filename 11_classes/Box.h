class Box
{
private:
    double length;
    double width;
    double height;

public:
    Box(double lv = 1.0, double wv = 1.0, double hv = 1.0);

    double volume();

    friend double surfaceArea(const Box& aBox);
};
