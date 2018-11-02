#pragma once

#include "Rectangle.h"

class Square: public Rectangle{
public:
    Square(Point A, Point B, Point C, Point D):Rectangle(A, B, C, D){}
    bool isSquare();
};