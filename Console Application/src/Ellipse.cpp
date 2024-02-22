#include"../Headers/Ellipse.h"
#include<cmath>

Ellipse::Ellipse(float inSemiMajor,float inSemiMinor)
{
    mSemiMajor = inSemiMajor;
    mSemiMinor = inSemiMinor;
}
float Ellipse::area()
{
    return 3.14*mSemiMajor*mSemiMinor;
}
float Ellipse::circumference()
{
    return 2*3.14*(sqrt((mSemiMajor * mSemiMajor)+(mSemiMinor * mSemiMinor)/2));
}

Ellipse::~Ellipse()
{
}
