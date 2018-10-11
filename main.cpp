#include <iostream>

#include "Rectangle.h"
#include "Triangle.h"

using namespace std;

Rectangle rectangle(1, 1);
Triangle triangle(1, 1);

int main() {
    rectangle.setLenght(4);
    rectangle.setWidth(2);

    triangle.setSideA(3);
    triangle.setSideB(4);

    std::cout << "Ouput : " << std::endl;
	std::cout << "Rectangle perimeter : " << rectangle.getPerimeter() << std::endl;
	std::cout << "Rectangle area      : " << rectangle.getArea() << std::endl;
	std::cout << "Triangle perimeter  : " << triangle.getPerimeter() << std::endl;
	std::cout << "Triangle area       : " << triangle.getArea() << std::endl;

	return 0;
}