#ifndef Square_hpp
#define Square_hpp

#include "iostream"
#include "Rectangle.hpp"

using namespace std;

class Square final : public Rectangle
{
public:
    Square();
    Square(float data);
    ~Square();
    double Area();
    float Perimeter();
};

#endif
