#pragma once

#include "Triangle.h"

class RightTriangle: public Triangle{
public:
    RightTriangle(Point A, Point B, Point C):Triangle(A, B, C){}
    bool isRightTriangle();
};