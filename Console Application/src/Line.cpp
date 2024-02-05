#include "../Headers/Line.h"
#include<cmath>

Line::Line(double inX1, double inY1, double inX2, double inY2)
{
    mX1 = inX1;
    mY1 = inY1;
    mX2 = inX2;
    mY2 = inY2;
}
 
double Line::length()
{
    return sqrt(pow(mX2 - mX1, 2) + pow(mY2 - mY1, 2));
}
 
Line::~Line()
{
}
