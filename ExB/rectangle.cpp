#include "rectangle.h"
#include "point.h"
#include "shape.h"
#include <iostream>
using namespace std;

// Updated constructor
Rectangle::Rectangle(int x, int y, double sideA, double sideB, const char* name) 
    : Shape(name, Point(x, y), Point(x + sideA, y + sideB)), // Create Point objects for the shape
      sideA(sideA), sideB(sideB) {}

Rectangle::~Rectangle()
{
    // Destructor logic (if needed)
}

Rectangle::Rectangle(const Rectangle& other)
    : Shape(other), // Call the base class copy constructor
      sideA(other.sideA),
      sideB(other.sideB) {}

Rectangle& Rectangle::operator=(const Rectangle& other)
{
    if (this == &other) return *this; // Check for self-assignment

    Shape::operator=(other); // Call the base class assignment operator

    sideA = other.sideA; // Copy member variables
    sideB = other.sideB;

    return *this;
}

double Rectangle::area() const
{
    return sideA * sideB;
}

double Rectangle::perimeter() const
{
    return (2 * sideB) + (2 * sideA);
}

// Side B
double Rectangle::getSide_b() const 
{
    return sideB;
}

void Rectangle::setSide_b(double side_b)
{
    this->sideB = side_b;
}

// Side A
double Rectangle::getSide_a() const 
{
    return sideA; // Corrected to return sideA
}

void Rectangle::setSide_a(double side_a)
{
    this->sideA = side_a;
}

void Rectangle::display() const
{
    cout << "Rectangle Name: " << getName() << "\n";
    cout << "X-coordinate: " << get_xPoint().get_x() << "\n"; // Use get_xPoint()
    cout << "Y-coordinate: " << get_yPoint().get_y() << "\n"; // Use get_yPoint()
    cout << "Side a: " << sideA << "\n";
    cout << "Side b: " << sideB << "\n";
    cout << "Area: " << area() << "\n";
    cout << "Perimeter: " << perimeter() << "\n";
}
