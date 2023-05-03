#include "Rectangle.hpp"
#include "iostream"

Rectangle::Rectangle() {
  a = rand() % 20;
  b = rand() % 20;
}

double Rectangle::Square() {
  double square = a * b;
  return square;

}

double Rectangle::Perimeter() {
  double perimeter = (a + b) * 2;
  return perimeter;
}

void Rectangle::Print() {
  std::cout << "Square " << Square() << "cm^2" << std::endl;
  std::cout << "Perimeter: " << Perimeter() << "cm" << std::endl;
}

Rectangle::~Rectangle() {

}
