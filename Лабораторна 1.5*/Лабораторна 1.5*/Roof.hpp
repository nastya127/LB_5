#ifndef Roof_hpp
#define Roof_hpp

#include "iostream"

using namespace std;

class Roof
{
protected:
    string material_;
    
public:
    Roof();
    Roof(string material);
    ~Roof();
    virtual void Print() = 0;
};

#endif
