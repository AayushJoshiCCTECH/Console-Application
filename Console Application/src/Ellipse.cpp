#include"../Headers/Ellipse.h"
#include<cmath>

Ellipse::Ellipse(float semi_major,float semi_minor)
{
    this->semi_major = semi_major;
    this->semi_minor = semi_minor;
}
float Ellipse::area(){
    return 3.14*semi_major*semi_minor;
}
float Ellipse::circumference(){
    return 2*3.14*(sqrt((semi_major * semi_major)+(semi_minor * semi_minor)/2));
}

Ellipse::~Ellipse()
{
}
