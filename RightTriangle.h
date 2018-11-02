#pragma once

#include "Triangle.h"

class RightTriangle: public Triangle{
public:
    RightTriangle(Point A, Point B, Point C):Triangle(A, B, C){}

    /**
     * Checking if the triangle formed by the submitted points is a right triangle.
     * Uses Pythagoras' theorem.
     * @return True if triangle is right
     */
    bool isRightTriangle();
};