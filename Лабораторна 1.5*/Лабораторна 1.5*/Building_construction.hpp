#ifndef Building_construction_hpp
#define Building_construction_hpp

#include "iostream"
#include "Foundation.hpp"
#include "Walls.hpp"

using namespace std;

class Building_construction : public Foundation, Walls
{
    float square;
    
public:
    Building_construction();
    Building_construction(float square);
    ~Building_construction();
    void Print();
};

#endif
