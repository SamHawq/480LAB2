/* 
* File Name: square.cpp
* Assignment: Lab 2 Exercise B
* Lab Section: B02
* Completed by: Samiul Haque, Elias Poitras-Whitecalf
* Development Date: Sept 23, 2024
*/
#include "square.h"
#include "shape.h"
#include <iostream>

using namespace std;

Square::Square(int x, int y, int side, const char* name)
    : Shape(name, x, y), sideA(side) {} 

Square::~Square() {}

//copy ctor
Square::Square(const Square& other)
    : Shape(other), sideA(other.sideA) {}

//assignment op
Square& Square::operator=(const Square& other) {
    if (this == &other) return *this;
    Shape::operator=(other); 
    sideA = other.sideA; 
    return *this; 
}

int Square::getSide_a() const {
    return sideA;
}

void Square::setSide_a(int side) {
    sideA = side; // Set sideA
}

int Square::area() const {
    return sideA * sideA;
}

int Square::perimeter() const {
    return 4 * sideA;
}

void Square::display() const {
    Shape::display();
    cout << "Side a: " << sideA << "\n";
    cout << "Area: " << area() << "\n";
    cout << "Perimeter: " << perimeter() << "\n";
}

void Square::display2() const{
    Shape::display();
}
