#pragma once

#include "Quadrilateral.h"

class Rectangle : public Quadrilateral{
public:
	Rectangle(Point A, Point B, Point C, Point D): Quadrilateral(A, B, C, D){}
	bool isRectangle();
};