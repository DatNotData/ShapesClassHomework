#include "Rectangle.h"

bool Rectangle::isRectangle(){
	this->getPerimeter();
	bool retVal = _sideA == _sideC && _sideB == _sideD;
	if(!retVal)
		std::cout << "Error - This is not a rectangle." << std::endl;
	return retVal;
}