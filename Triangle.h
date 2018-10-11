#pragma once

#include <math.h>

class Triangle {
public:
	Triangle(float a, float b);
	float getPerimeter();
	float getArea();

    void setSideA(float a);
    void setSideB(float b);

private:
	float sideA;
	float sideB;
};