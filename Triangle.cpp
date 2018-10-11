#include "Triangle.h"

Triangle::Triangle(float a, float b) {
	sideA = a;
	sideB = b;
}

float Triangle::getPerimeter() {
	return sideA + sideB + sqrt((sideA*sideA) + (sideB*sideB));
}

float Triangle::getArea() {
	return sideA * sideB / 2;
}

void Triangle::setSideA(float a){
    sideA = a;
}

void Triangle::setSideB(float b){
    sideB = b;
}