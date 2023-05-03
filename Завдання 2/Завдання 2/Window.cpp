#include "Window.hpp"

Window::Window()
{
    x = rand()%100;
    y = rand()%100;
    Button temp;
    button = temp;
}
Window::Window(coordinates x, coordinates y, const Button &button)
{
    this -> x = x;
    this -> y = y;
    this -> button = button;
}
void Window::Print()
{
    button.Print();
    cout << "Координати кнопки: (" << x << ", " << y << ")" << endl;
}

