#include "House.hpp"

string StyleArr[5] {"Scandinavian", "Minimalist", "Classic", "Modernist", "Eco-style"};

House::House()
{
    repair_style = StyleArr[rand()%5];
    if (number_of_rooms == 1)
        price = 25000;
    else if (number_of_rooms == 2)
        price = 53000;
    else if (number_of_rooms == 3)
        price = 98000;
    else if (number_of_rooms == 4)
        price = 147000;
    else if (number_of_rooms == 5)
        price = 189000;
        
}
House::House(string repair_style, float price)
{
    this -> repair_style = repair_style;
    this -> price = price;
}
House::~House()
{
    
}
void House::Print()
{
    New_building::Print();
    cout << "Style of repair: " << repair_style << endl;
    cout << "House price: " << price << "$" << endl << endl << endl;
}
