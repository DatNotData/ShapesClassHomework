#include "Quadrilateral.h"

Quadrilateral::Quadrilateral(Point A, Point B, Point C, Point D){
    _A = A;
    _B = B;
    _C = C;
    _D = D;
}

float Quadrilateral::getPerimeter(){
        _sideA = sqrt(pow(_A.x-_B.x, 2)+ pow(_A.y-_B.y, 2));
        _sideB = sqrt(pow(_B.x-_C.x, 2)+ pow(_B.y-_C.y, 2));
        _sideC = sqrt(pow(_C.x-_D.x, 2)+ pow(_C.y-_D.y, 2));
        _sideD = sqrt(pow(_D.x-_A.x, 2)+ pow(_D.y-_A.y, 2));

        return _sideA+_sideB+_sideC+_sideD;
}

float Quadrilateral::getArea(){
    RightTriangle t1(_A, _B, _C);
    RightTriangle t2(_A, _D, _C);

    _isRectangle = t1.isRightTriangle() && t2.isRightTriangle();

    return t1.getArea() + t2.getArea();
}