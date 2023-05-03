#include "iostream"
#include "ctime"
#include "Foundation.hpp"
#include "Walls.hpp"
#include "Building_construction.hpp"
#include "Roof.hpp"
#include "New_building.hpp"
#include "House.hpp"

using namespace std;

int main()
{
    srand(time(nullptr));
    cout << "Information about the house:" << endl << "____________________________" << endl << endl;
    House a;
    a.Print();
    
}
