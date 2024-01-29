#include "../Headers/Square.h"

Square::Square(float side)
{
    this -> side = side;
}

float Square::area(){
    if(side > 0){
    return side * side;
    } else return -1;
}
float Square::perimeter(){
    if(side > 0){
    return 4*(side);
    }
    else return -1;
}


Square::~Square()
{
}
