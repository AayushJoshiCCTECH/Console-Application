#include "../Headers/Square.h"

Square::Square(float inSide)
{
    mSide = inSide;
}

float Square::area()
{
    if(mSide > 0){
    return mSide * mSide;
    } else return -1;
}
float Square::perimeter()
{
    if(mSide > 0){
    return 4*(mSide);
    }
    else return -1;
}
Square::~Square()
{
}
