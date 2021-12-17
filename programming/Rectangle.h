#pragma once
#include "Shape.h"

class Rectangle :
    public Shape
{
public:
    void Draw() const;
    void Resize(double width, double height);

    Rectangle();
    Rectangle(double x, double y, double width, double height);
protected:
    double _width;
    double _height;
};