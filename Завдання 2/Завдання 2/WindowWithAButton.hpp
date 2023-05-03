#ifndef WindowWithAButton_hpp
#define WindowWithAButton_hpp

#include "iostream"
#include "Window.hpp"

using namespace std;

class WindowWithAButton : public Window
{
    string *menu;
    
public:
    WindowWithAButton();
    WindowWithAButton(string *menu);
    ~WindowWithAButton();
    void Print();
};

#endif
