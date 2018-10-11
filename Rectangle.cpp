#include "Rectangle.h"

Rectangle::Rectangle(float l, float w) {
	lenght = l;
	width = w;
}

float Rectangle::getPerimeter() {
	return 2 * (lenght + width);
}

float Rectangle::getArea() {
	return lenght * width;
}

void Rectangle::setLenght(float l){
    lenght = l;
}

void Rectangle::setWidth(float w){
    width = w;
}