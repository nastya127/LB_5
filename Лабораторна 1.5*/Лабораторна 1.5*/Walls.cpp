#include "Walls.hpp"

string MaterialArr[7]{"Brick", "Reinforced concrete", "Wood", "Plasterboard", "Glass", "Metal", "Foam concrete"};

Walls::Walls()
{
    height = rand()%300 + 100;
    thickness = rand()%30 + 10;
    material = MaterialArr[rand()%7];
}
Walls::Walls(float height, float thicknes, string material)
{
    this -> height = height;
    this -> thickness = thicknes;
    this -> material = material;
}
Walls::~Walls()
{
    
}
void Walls::Print()
{
    cout << "Wall height: " << height/100 << "m" << endl;
    cout << "Wall thickness: " << thickness/100 << "m" << endl;
    cout << "Material: " << material << endl;
}
