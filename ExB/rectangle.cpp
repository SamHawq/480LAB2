/* 
* File Name: rectangle.cpp
* Assignment: Lab 2 Exercise B
* Lab Section: B02
* Completed by: Samiul Haque, Elias Poitras-Whitecalf
* Development Date: Sept 23, 2024
*/
#include "rectangle.h"
#include "shape.h"
#include <iostream>

using namespace std;

//ctor
Rectangle::Rectangle(int x, int y, int sideA, int sideB, const char* name)
    : Square(x, y, sideA, name), sideB(sideB) {} 

//dtor
Rectangle::~Rectangle() {}

//copy ctor
Rectangle::Rectangle(const Rectangle& other)
    : Square(other), 
      sideB(other.sideB) {}

//assignment Op
Rectangle& Rectangle::operator=(const Rectangle& other) {
    if (this != &other){
        Square::operator=(other); 
        sideB = other.sideB;
    }

    return *this; 
}

int Rectangle::area() const {
    int area = getSide_a() * sideB;
    return area;
}

int Rectangle::perimeter() const {
    int perimeter =  (2 * getSide_a()) + (2 * sideB);
    return perimeter;
}

void Rectangle::display() const {
    Square::display2();
    cout << "Side a: " << getSide_a() << "\n";
    cout << "Side b: " << sideB << "\n";
    cout << "Area: " << area() << "\n";
    cout << "Perimeter: " << perimeter() << "\n";
}

int Rectangle::getSide_b() const {
    return sideB;
}

void Rectangle::setSide_b(int side_b) {
    sideB = side_b;
}
