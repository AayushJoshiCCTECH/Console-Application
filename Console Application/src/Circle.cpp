#include "../Headers/Circle.h"

Circle::Circle(float inRadius)

{
    inRadius = mRadius;
}
float Circle::area()
{
    return 3.14 * mRadius * mRadius;
}
float Circle::circumference()
{
    return 2 * 3.14 * mRadius;
}

Circle::~Circle()
{
}
