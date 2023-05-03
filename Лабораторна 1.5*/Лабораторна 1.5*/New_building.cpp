#include "New_building.hpp"

string AdressArr[]{"St. Tarnavskyi, building 55", "St. Horodotska, building 35", "St. Petliury, building 83", "St. Boychuk Brothers, building 22", "St. Sheptytskyi, building 13"};

New_building::New_building()
{
    number_of_rooms = rand()%4 + 1;
    address = AdressArr[rand()%5];
}
New_building::New_building(int number_of_rooms, string address)
{
    this -> number_of_rooms = number_of_rooms;
    this -> address = address;
}
New_building::~New_building()
{
    
}
void New_building::Print()
{
    Building_construction::Print();
    cout << "Roof material: " << material_ << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Address: " << address << endl;
}
