#ifndef Figure_hpp
#define Figure_hpp

#include "iostream"

class Figure
{

public:
  virtual double Square() = 0;
  virtual double Perimeter() = 0;
  virtual void Print() = 0;
};

#endif 
