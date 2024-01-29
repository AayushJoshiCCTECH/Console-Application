#include "../Headers/Triangle.h"

Triangle::Triangle(float base, float height)
{
    this->base = base;
    this->height = height;
}
float Triangle::area(){
    return (0.5*base*height);
}
Triangle::~Triangle()
{
}
