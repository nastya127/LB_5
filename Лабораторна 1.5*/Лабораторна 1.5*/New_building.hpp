#ifndef New_building_hpp
#define New_building_hpp

#include "iostream"
#include "Building_construction.hpp"
#include "Roof.hpp"

using namespace std;

class New_building : public Building_construction, Roof
{
protected:
    int number_of_rooms;
    string address;
    
public:
    New_building();
    New_building(int number_of_rooms, string address);
    ~New_building();
    void Print();
};

#endif
