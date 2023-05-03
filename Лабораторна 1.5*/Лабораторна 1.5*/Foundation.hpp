#ifndef Foundation_hpp
#define Foundation_hpp

#include "iostream"

using namespace std;

class Foundation
{
    bool heat_insulation;
    string type;
    
public:
    Foundation();
    Foundation(bool heat_insulation, string type);
    ~Foundation();
    virtual void Print();
};

#endif
