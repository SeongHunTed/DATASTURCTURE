#include "CIrcle.h"
#include <iostream>
using namespace std;

void Circle::Draw() const
{
    cout << "[Circle] Position = (" << _x << ", " << _y << ")" << "Radius = " << _radius << endl;
}

void Circle::SetRadius(double r)
{
    _radius = r;
}

Circle::Circle()
{
    _radius = 100.0;
}

Circle::Circle(double x, double y, double r)
    : Shape(x, y)
{
    SetRadius(r);
}
