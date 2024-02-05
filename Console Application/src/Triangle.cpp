#include "../Headers/Triangle.h"

Triangle::Triangle(float inBase, float inHeight)
{
    mBase = inBase;
    mHeight = inHeight;
}
float Triangle::area(){
    return (0.5*mBase*mHeight);
}
Triangle::~Triangle()
{
}
