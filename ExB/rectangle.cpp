#include "rectangle.h"
#include "shape.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(const char* name, const Point& originPoint, double sideA, double sideB) 
    : Shape(name, originPoint), sideA(sideA), sideB(sideB) {}

Rectangle::~Rectangle()
{

}

double Rectangle::area() const
{
    return sideA * sideB;
}

double Rectangle::perimeter() const
{
    return (2 * sideB) + (2 * sideA);
}


//sideB
double Rectangle::getSide_b() const 
{
    return sideB;
}

void Rectangle::setSide_b(double side_b)
{
    this->sideB = side_b;
}

//sideA
double Rectangle::getSide_a() const 
{
    return sideB;
}

void Rectangle::setSide_a(double side_a)
{
    this->sideA = side_a;
}

void Rectangle::display() const
{
    cout << "Rectangle Name: " << getName() << "\n";
    cout << "X-coordinate: " << getOrigin().get_x() << "\n";
    cout << "Y-coordinate: " << getOrigin().get_y() << "\n";
    cout << "Side a: " << sideA << "\n";
    cout << "Side b: " << sideB << "\n";
    cout << "Area: " << area () << "\n";
    cout << "Perimeter: " << perimeter() << "\n";
}

