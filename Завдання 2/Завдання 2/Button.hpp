#ifndef Button_hpp
#define Button_hpp

#include "iostream"

using namespace std;

class Button
{
    float size;
public:
    Button();
    Button(float size);
    float GetSize();
    void SetSize(float size);
    void Print();
};

#endif 
