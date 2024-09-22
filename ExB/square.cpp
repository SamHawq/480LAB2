#include "square.h"
#include "shape.h"
#include <iostream>
using namespace std;

Square::Square(const char* name, const Point& originPoint, double side)
    : Shape(name, originPoint), sideA(side) {}

Square::~Square()
{
// idk if necessary and if so what
}

double Square::area() const
{
    return sideA * sideA;
}

double Square::perimeter() const
{
    return 4 * sideA;
}

double Square::getSide_a() const 
{
    return sideA;
}

void Square::setSide_a(double side_a)
{
    this->sideA = side_a;
}

void Square::display() const
{
    cout << "Square Name: " << getName() << "\n";
    cout << "X-coordinate: " << getOrigin().get_x() << "\n";
    cout << "Y-coordinate: " << getOrigin().get_y() << "\n";
    cout << "Side a: " << sideA << "\n";
    cout << "Area: " << area () << "\n";
    cout << "Perimeter: " << perimeter() << "\n";
}

