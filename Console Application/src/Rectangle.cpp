#include "../Headers/Rectangle.h"

Rectangle::Rectangle(float lenght, float breadth)
{
    this->length = lenght;
    this->breadth = breadth;
}
float Rectangle::area(){
    return length * breadth;
}
float Rectangle::perimeter(){
    return 2*(length+breadth);
}
Rectangle::~Rectangle()
{
}
