#pragma once

#include "Point.h"

#include <math.h>
#include <iostream>

class Shape{
public:
    /** Get shape's area
     * @return Shape's area
    */
    virtual float getArea();

    /** Get shape's perimeter
     * @return Shape's perimeter
    */
    virtual float getPerimeter();
};