#ifndef Data_hpp
#define Data_hpp

#include "iostream"

using namespace std;

class Data {
public:
    Data() {};
    virtual ~Data() {}
    virtual Data* clone() const = 0;
};

#endif
