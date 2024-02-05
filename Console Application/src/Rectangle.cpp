#include "../Headers/Rectangle.h"

Rectangle::Rectangle(float inLenght, float inBreadth)
{
    mLength = inLenght;
    mBreadth = inBreadth;
}
float Rectangle::area(){
    return mLength * mBreadth;
}
float Rectangle::perimeter(){
    return 2*(mLength+mBreadth);
}
Rectangle::~Rectangle()
{
}
