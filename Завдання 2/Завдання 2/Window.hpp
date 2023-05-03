#ifndef Window_hpp
#define Window_hpp

#include "iostream"
#include "Button.hpp"

using namespace std;

class Window
{
protected:
    typedef float coordinates;
    coordinates x, y;
    Button button;
public:
    Window();
    Window(coordinates x, coordinates y, const Button &button);
    virtual void Print();
};

#endif
