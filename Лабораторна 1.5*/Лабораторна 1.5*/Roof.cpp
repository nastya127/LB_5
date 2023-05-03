#include "Roof.hpp"


string MaterialArr2[4] {"Metal tile", "Slate", "Metal profile", "Bitumen tile"};

Roof::Roof()
{
    material_ = MaterialArr2[rand()%4];
}
Roof::Roof(string material_)
{
    this -> material_ = material_;
}
Roof::~Roof()
{
    
}
