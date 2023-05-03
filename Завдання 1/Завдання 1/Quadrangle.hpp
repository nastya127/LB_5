#ifndef Quadrangle_hpp
#define Quadrangle_hpp

#include "iostream"
#include "cmath"

using namespace std;

class Quadrangle
{
protected:
    typedef float side;
    side A, B, C, D;
    typedef int angle;
    angle a, b, c, d;
public:
    Quadrangle();
    Quadrangle(side A, side B, side C, side D, angle a, angle b, angle c, angle d);
    ~Quadrangle();
    virtual double Area();
    virtual float Perimeter();
    void PRINT();
};

#endif
