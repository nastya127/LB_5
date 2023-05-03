#ifndef Trapeze_hpp
#define Trapeze_hpp

#include "iostream"

using namespace std;

class Trapeze
{
  double a, b, c, d, mid, h;
public:
  Trapeze();
  ~Trapeze();
  void Print();
  double Square();
  double Perimeter();
};

#endif
