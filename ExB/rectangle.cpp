#include "rectangle.h"
#include "shape.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(int x, int y, double sideA, double sideB, const char* name)
    : Shape(name, x, y), sideA(sideA), sideB(sideB) {} // Pass x and y directly to Shape

Rectangle::~Rectangle() {}

Rectangle::Rectangle(const Rectangle& other)
    : Shape(other), // Call the base class copy constructor
      sideA(other.sideA), 
      sideB(other.sideB) {}

// Assignment Operator
Rectangle& Rectangle::operator=(const Rectangle& other) {
    if (this == &other) return *this; // Check for self-assignment

    Shape::operator=(other); // Call the base class assignment operator
    sideA = other.sideA; // Copy member variables
    sideB = other.sideB;

    return *this; // Return *this to allow for chained assignments
}

double Rectangle::area() const {
    return sideA * sideB;
}

double Rectangle::perimeter() const {
    return (2 * sideA) + (2 * sideB);
}

void Rectangle::display() const {
    cout << "Rectangle Name: " << getName() << "\n";
    cout << "X-coordinate: " << get_x() << "\n"; // Use get_x()
    cout << "Y-coordinate: " << get_y() << "\n"; // Use get_y()
    cout << "Side a: " << sideA << "\n";
    cout << "Side b: " << sideB << "\n";
    cout << "Area: " << area() << "\n";
    cout << "Perimeter: " << perimeter() << "\n";
}

double Rectangle::getSide_a() const {
    return sideA; // Return the value of sideA
}

void Rectangle::setSide_a(double side_a) {
    sideA = side_a; // Set the value of sideA
}

// Getters and Setters for sideB
double Rectangle::getSide_b() const {
    return sideB; // Return the value of sideB
}

void Rectangle::setSide_b(double side_b) {
    sideB = side_b; // Set the value of sideB
}
