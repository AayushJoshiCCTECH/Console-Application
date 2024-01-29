#include "../Headers/Line.h"
#include<cmath>

Line::Line(double x1, double y1, double x2, double y2)
{
    this->x1 = x1;
    this->y1 = y1;
    this->x2 = x2;
    this->y2 = y2;
}
 
double Line::length()
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
 
Line::~Line()
{
}
