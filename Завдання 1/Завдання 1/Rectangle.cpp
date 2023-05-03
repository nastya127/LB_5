#include "Rectangle.hpp"
#include "Quadrangle.hpp"

Rectangle::Rectangle()
{
    this -> a = 90;
    this -> b = 90;
    this -> c = 90;
    this -> d = 90;
    this -> C = A;
    this -> D = B;
}
Rectangle::Rectangle(float A, float B)
{
    this -> a = 90;
    this -> b = 90;
    this -> c = 90;
    this -> d = 90;
    this -> A = A;
    this -> C = A;
    this -> B = B;
    this -> D = B;
}
Rectangle::~Rectangle()
{
    
}
double Rectangle::Area()
{
    double area = A * B;
    return area;
}
float Rectangle::Perimeter()
{
    float perimeter = 2 * (A + B);
    return perimeter;
}

