#pragma once

class Rectangle {
public:
	Rectangle(float l, float w);
	float getPerimeter();
	float getArea();

    void setLenght(float l);
    void setWidth(float w);

private:
   	float lenght;
	float width;
};