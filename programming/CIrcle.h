#pragma once
#include "Shape.h"

class Circle :
    public Shape
{
public:
    void Draw() const;
    void SetRadius(double r);

    Circle();
    Circle(double x, double y, double r);

protected:
    double _radius;
};