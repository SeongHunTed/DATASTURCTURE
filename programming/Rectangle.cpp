#include "Rectangle.h"
#include <iostream>
using namespace std;

void Rectangle::Draw() const
{
    cout << "[Rectangle] Position = (" << _x << ", " << _y << ")" << "Size = " << _width << ", " << _height << ")" << endl;
}

void Rectangle::Resize(double width, double height)
{
    _width = width;
    _height = height;
}

Rectangle::Rectangle()
{
    _width = _height = 100.0;
}

Rectangle::Rectangle(double x, double y, double width, double height) : Shape(x,y)
{
    Resize(width, height);
}