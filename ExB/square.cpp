#include "square.h"
#include "shape.h"
#include <iostream>

using namespace std;

Square::Square(int x, int y, double side, const char* name)
    : Shape(name, x, y), sideA(side) {} // Pass x and y directly to Shape

Square::~Square() {}

Square::Square(const Square& other)
    : Shape(other), sideA(other.sideA) {} // Copy constructor

Square& Square::operator=(const Square& other) {
    if (this == &other) return *this; // Check for self assignment
    Shape::operator=(other); // Call base class assignment operator
    sideA = other.sideA; // Copy member variable
    return *this; // Return current object
}


double Square::getSide_a() const {
    return sideA;
}

void Square::setSide_a(double side) {
    sideA = side; // Set sideA
}

double Square::area() const {
    return sideA * sideA;
}

double Square::perimeter() const {
    return 4 * sideA;
}

void Square::display() const {
    cout << "Square Name: " << getName() << "\n";
    cout << "X-coordinate: " << get_x() << "\n";
    cout << "Y-coordinate: " << get_y() << "\n";
    cout << "Side a: " << sideA << "\n";
    cout << "Area: " << area() << "\n";
    cout << "Perimeter: " << perimeter() << "\n";
}
