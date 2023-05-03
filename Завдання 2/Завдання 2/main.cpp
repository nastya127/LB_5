#include "iostream"
#include "Button.hpp"
#include "Window.hpp"
#include "WindowWithAButton.hpp"
#include "ctime"

using namespace std;

int main()
{
    srand(time(nullptr));
    string data = "File | Edit | View | Find | Help";
    string *p = &data;
    WindowWithAButton obj(p);
    obj.Print();
    
}
