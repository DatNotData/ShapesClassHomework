#include <iostream>

#include "RightTriangle.h"
#include "Square.h"

RightTriangle rtri(Point(0,0),Point(0,3),Point(4,0));
Square sqr(Point(0,0), Point(0,3), Point(3,3), Point(3,0));

int main(){
    std::cout << "is right  : " << rtri.isRightTriangle() << std::endl;
    std::cout << "area      : " << rtri.getArea() << std::endl;
    std::cout << "perimeter : " << rtri.getPerimeter() << std::endl;

    std::cout << std::endl;

    std::cout << "is square : " << sqr.isSquare() << std::endl;
    std::cout << "area      : " << sqr.getArea() << std::endl;
    std::cout << "perimeter : " << sqr.getPerimeter() << std::endl;

    return 0;
}