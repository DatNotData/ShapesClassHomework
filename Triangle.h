#pragma once

#include "Shape.h"

class Triangle : public Shape {
public:
    /**
     * @param A A corner of the triangle
     * @param B Another corner of the triangle
     * @param C Another corner of the triangle
     */
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