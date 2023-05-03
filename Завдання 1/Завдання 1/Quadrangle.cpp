#include "Quadrangle.hpp"

Quadrangle::Quadrangle()
{
    A = rand()%100;
    B = rand()%100;
    C = rand()%100;
    D = rand()%100;
    
    a = 120;
    b = 100;
    c = 80;
    d = 60;
}
Quadrangle::Quadrangle(side A, side B, side C, side D, angle a, angle b, angle c, angle d)
{
    this -> A = A;
    this -> B = B;
    this -> C = C;
    this -> D = D;
    
    this -> a = a;
    this -> b = b;
    this -> c = c;
    this -> d = d;

}
Quadrangle::~Quadrangle()
{
    
}

double Quadrangle::Area()
{
    double p = (A + B + C + D) / 2;
    double q = (a + c) / 2;
    double COS = cos(q);
    double area = sqrt((p - A) * (p - B) * (p - C) * (p - D));
    return area;
}
float Quadrangle::Perimeter()
{
    float perimeter = A + B + C + D;
    return perimeter;
}
void Quadrangle::PRINT()
{
    cout << "Сторона А: " << A << "cм" << endl;
    cout << "Сторона B: " << B << "cм" << endl;
    cout << "Сторона C: " << C << "cм" << endl;
    cout << "Сторона D: " << D << "cм" << endl << endl;
    cout << "Кут a: " << a << "°" << endl;
    cout << "Кут b: " << b << "°" << endl;
    cout << "Кут c: " << c << "°" << endl;
    cout << "Кут d: " << d << "°" << endl;

}
