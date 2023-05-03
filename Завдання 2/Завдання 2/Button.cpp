#include "Button.hpp"

Button::Button()
{
    size = rand()%100;
}
Button::Button(float size)
{
    this -> size = size;
}
float Button::GetSize()
{
    return size;
}
void Button::SetSize(float size)
{
    this -> size = size;
}
void Button::Print()
{
    cout << "Розмір кнопки: " << size << endl;
}

