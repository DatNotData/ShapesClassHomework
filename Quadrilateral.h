#pragma once

#include "Shape.h"

#include "RightTriangle.h"

class Quadrilateral : Shape{
public:
    /**
     * Points must be in order
     * @param A top left corner
     * @param B top right corner
     * @param C bottom right corner
     * @param D bottom left corner
     */
    Quadrilateral(Point A, Point B, Point C, Point D);

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