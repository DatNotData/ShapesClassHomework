#include "Square.h"

bool Square::isSquare(){
    this->getPerimeter();
    bool retVal = _sideA == _sideB && _sideB == _sideC && _sideC == _sideD;
    if(!retVal)
        std::cout << "Error - This is not a square." << std::endl;
    return retVal;
}