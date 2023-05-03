#include "Trapeze.hpp"
#include "iostream"

Trapeze::Trapeze() {
  a = rand() % 20;
  b = rand() % 20;
  c = rand() % 20;
  d = rand() % 20;
  mid = rand() % 20;
  h = rand() % 20;
}

double Trapeze::Square() {
  double square = mid * h;
  return square;

}

double Trapeze::Perimeter() {
  double perimeter = a + b + c + d;
  return perimeter;
}

void Trapeze::Print() {
  std::cout << "Square " << Square() << "cm^2" << std::endl;
  std::cout << "Perimeter: " << Perimeter() << "cm" << std::endl;
}

Trapeze::~Trapeze() {

}
