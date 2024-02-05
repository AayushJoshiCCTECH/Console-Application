#include"../Headers/Ellipse.h"
#include<cmath>

Ellipse::Ellipse(float inSemi_Major,float inSemi_Minor)
{
    mSemi_Major = inSemi_Major;
    mSemi_Minor = inSemi_Minor;
}
float Ellipse::area(){
    return 3.14*mSemi_Major*mSemi_Minor;
}
float Ellipse::circumference(){
    return 2*3.14*(sqrt((mSemi_Major * mSemi_Major)+(mSemi_Minor * mSemi_Minor)/2));
}

Ellipse::~Ellipse()
{
}
