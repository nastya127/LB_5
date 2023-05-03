#ifndef Rectangle_hpp
#define Rectangle_hpp

#include "iostream"
using namespace std;

class Rectangle
{
  double a, b;
public:
  Rectangle();
  ~Rectangle();
  void Print();
  double Square();
  double Perimeter();
};

#endif 
