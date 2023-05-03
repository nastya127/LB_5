#include "iostream"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Trapeze.hpp"
#include "ctime"

using namespace std;

int main() {
  srand(time(NULL));
  Circle obj;
  cout << "Circle: " << endl;
  obj.Print();
  cout << endl;
  Rectangle obj1;
  cout << "Rectangle: " << endl;
  obj1.Print();
  cout << endl;
  Trapeze obj2;
  cout << "Trapeze: " << endl;
  obj2.Print();
}
