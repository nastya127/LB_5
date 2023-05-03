#include "WindowWithAButton.hpp"


WindowWithAButton::WindowWithAButton()
{
    string data = "File | Edit | View | Find | Help";
    menu = &data;
}
WindowWithAButton::WindowWithAButton(string *menu)
{
    this -> menu = menu;
}
WindowWithAButton::~WindowWithAButton()
{
    
}
void WindowWithAButton::Print()
{
    this->Window::Print();
    cout << "Menu: " << *menu << endl;
}

