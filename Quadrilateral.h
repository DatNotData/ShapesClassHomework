#pragma once

#include "Shape.h"

#include "RightTriangle.h"

class Quadrilateral : Shape{
public:
    Quadrilateral(Point A, Point B, Point C, Point D); // points must be sumbited in order

    float getArea();
    float getPerimeter();

protected:
    Point _A;
    Point _B;
    Point _C;
    Point _D;

    bool _isRectangle;

    float _sideA;
    float _sideB;
    float _sideC;
    float _sideD;
};