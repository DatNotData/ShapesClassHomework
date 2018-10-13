#pragma once

#include "Shape.h"

class Triangle : public Shape {
public:
	Triangle(Point A, Point B, Point C);

    float getPerimeter();
    float getArea();

protected:

	Point _A;
    Point _B;
    Point _C;

    float _sideA;
    float _sideB;
    float _sideC;
};