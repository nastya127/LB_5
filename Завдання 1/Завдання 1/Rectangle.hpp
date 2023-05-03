#ifndef Rectangle_hpp
#define Rectangle_hpp

#include "iostream"
#include "cmath"
#include "Quadrangle.hpp"

using namespace std;

class Rectangle : virtual public Quadrangle
{
public:
    Rectangle();
    Rectangle(float A, float B);
    ~Rectangle();
    double Area();
    float Perimeter();

};

#endif 
