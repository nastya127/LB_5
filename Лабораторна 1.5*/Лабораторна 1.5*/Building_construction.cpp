#include "Building_construction.hpp"

Building_construction::Building_construction()
{
    square = rand()%250 + 100;
}
Building_construction::Building_construction(float square)
{
    this -> square = square;
}
Building_construction::~Building_construction()
{
    
}
void Building_construction::Print()
{
    Foundation::Print();
    Walls::Print();
    cout << "Square: " << square << "m²" << endl;
}
