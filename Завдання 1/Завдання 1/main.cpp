#include "iostream"
#include "Quadrangle.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"
#include "ctime"

using namespace std;

int main()
{
    srand(time(nullptr));
    Quadrangle a;
    cout << "Чотирикутник: " << endl << endl;
    a.PRINT();
    cout << endl << "Площа чотирикутника: " << a.Area() << "(см²)" << endl;
    cout << "Периметр чотирикутника: " << a.Perimeter() << "(см)" << endl;
    cout << "___________" << endl << endl;
    Rectangle m;
    cout << "Прямокутник: " << endl << endl;
    m.PRINT();
    cout << "Площа прямокутника: " << m.Area() << "(см²)" << endl;
    cout << "Периметр прямокутника: " << m.Perimeter() << "(см)" << endl;
    cout << "___________" << endl << endl;
    Square v;
    cout << "Квадрат: " << endl << endl;
    v.PRINT();
    cout << "Площа квадрата: " << v.Area() << "(см²)" << endl;
    cout << "Периметр квадрата: " << v.Perimeter() << "(см)" << endl << endl;
}
