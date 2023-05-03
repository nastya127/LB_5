#ifndef Circle_hpp
#define Circle_hpp

#include "iostream"
#include "Figure.hpp"

using namespace std;

class Circle : public Figure {
  double r;
public:
  Circle();
  ~Circle();
  void Print();
  double Square();
  double Perimeter();
};

#endif 
