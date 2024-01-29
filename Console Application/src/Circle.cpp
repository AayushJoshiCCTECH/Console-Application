#include "../Headers/Circle.h"

Circle::Circle(float radius)

{
    this->radius = radius;
}
float Circle::area(){
    return 3.14 * radius * radius;
}
float Circle::circumference(){
    return 2 * 3.14 * radius;
}

Circle::~Circle()
{
}
