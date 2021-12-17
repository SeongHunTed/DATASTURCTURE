#include "Shape.h"
#include <iostream>
using namespace std;

void Shape::Move(double x, double y)
{
    _x = x;
    _y = y;
}


void Shape::Draw() const
{
    cout << "[Shape] Position : (" << _x << ", " << _y << ")" << endl;
}


Shape::Shape()
{
    _x = _y = 0.0;
}

Shape::Shape(double x, double y)
{
    _x = x;
    _y = y;
}