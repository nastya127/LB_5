#ifndef Walls_hpp
#define Walls_hpp

#include "iostream"
#include "Foundation.hpp"

using namespace std;

class Walls 
{
    float height;
    float thickness;
    string material;
    
public:
    Walls();
    Walls(float height, float thicknes, string material);
    ~Walls();
    virtual void Print();
};

#endif
