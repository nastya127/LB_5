#include "Square.hpp"

Square::Square()
{
    A = B = C = D;
}
Square::Square(float data)
{
    A = B = C = D = data;

}
Square::~Square()
{
    
}
double Square::Area()
{
    double area = A * A;
    return area;
}
float Square::Perimeter()
{
    float perimeter = 4 * A;
    return perimeter;
}
