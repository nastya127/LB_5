#include "Circle.hpp"

#include "iostream"
#include "math.h"

const double Pi = 3.1415;

Circle::Circle() {
  r = rand() % 20;
}
Circle::~Circle() {

}

double Circle::Square() {
  double square = Pi * pow(r, 2);
  return square;
}

double Circle::Perimeter() {
  double perimeter = 2 * Pi * r;
  return perimeter;
}

void Circle::Print() {
  std::cout << "Square " << Square() << "cm^2" << std::endl;
  std::cout << "Perimeter: " << Perimeter() << "cm" << std::endl;
}
