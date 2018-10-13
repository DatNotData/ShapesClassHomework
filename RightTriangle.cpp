#include "RightTriangle.h"

#include <iostream>

bool RightTriangle::isRightTriangle(){
	bool retVal = 0;
	this->getPerimeter();
	if (_sideA > _sideB && _sideA > _sideC){
		float hyp = sqrt(pow(_sideB,2)+pow(_sideC,2));
		retVal = _sideA == hyp;
	}

	if (_sideB > _sideA && _sideB > _sideC){
		float hyp = sqrt(pow(_sideA,2)+pow(_sideC,2));
		retVal = _sideB == hyp;
	}

	if (_sideC > _sideA && _sideC > _sideB){
		float hyp = sqrt(pow(_sideA,2)+pow(_sideB,2));
		retVal = _sideC == hyp;
	}
	
	if(!retVal)
		std::cout << "Error - This is not a right triangle." << std::endl;

	return retVal;
}