#include "Foundation.hpp"

string TypeArr[6]{"Strip", "Piled", "Plate", "Column", "Stick", "Combined"};

Foundation::Foundation()
{
    type = TypeArr[rand()%6];
    heat_insulation = true;
}
Foundation::Foundation(bool heat_insulation, string type)
{
    this -> type = type;
    this -> heat_insulation = heat_insulation;
}
Foundation::~Foundation()
{
    
}
void Foundation::Print()
{
    cout << "Type of foundation: " << type << endl;
    if (heat_insulation == true)
        cout << "Thermal insulation: available" << endl;
    else cout << "Thermal insulation: not available" << endl;
}
