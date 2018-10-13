#include "Triangle.h"

Triangle::Triangle(Point A, Point B, Point C){
    _A = A;
    _B = B;
    _C = C;
}

float Triangle::getPerimeter(){
    _sideA = sqrt(pow(_A.x-_B.x, 2)+ pow(_A.y-_B.y, 2));
    _sideB = sqrt(pow(_B.x-_C.x, 2)+ pow(_B.y-_C.y, 2));
    _sideC = sqrt(pow(_C.x-_A.x, 2)+ pow(_C.y-_A.y, 2));

    return _sideA+_sideB+_sideC;
}

float Triangle::getArea(){
    float S = this->getPerimeter();
    S /= 2;

    return sqrt(S*(S-_sideA)*(S-_sideB)*(S-_sideC));
}