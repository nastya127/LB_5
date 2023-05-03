#ifndef House_hpp
#define House_hpp

#include "iostream"
#include "New_building.hpp"

using namespace std;

class House : public New_building
{
    string repair_style;
    float price;
    
public:
    House();
    House(string repair_style, float price);
    ~House();
    void Print();
};

#endif
