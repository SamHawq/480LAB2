/* 
* File Name: shape.cpp
* Assignment: Lab 2 Exercise B
* Lab Section: B02
* Completed by: Samiul Haque, Elias Poitras-Whitecalf
* Development Date: Sept 23, 2024
*/
#include "shape.h"
#include <iostream>
#include <string.h>

using namespace std;

//ctor
Shape::Shape(const char* name, int x, int y)
    : origin(x, y)
{
    shapeName = new char[strlen(name) + 1];
    strcpy(shapeName, name);
}

//dtor
Shape::~Shape() 
{
    delete[] shapeName;
}

//copy ctor
Shape::Shape(const Shape& other)
    : origin(other.origin)
{
    shapeName = new char[strlen(other.shapeName) + 1];
    strcpy(shapeName, other.shapeName);
}

//assignment op
Shape& Shape::operator=(const Shape& other) 
{
    if (this != &other) {
        delete[] shapeName;
        shapeName = new char[strlen(other.shapeName) + 1];
        strcpy(shapeName, other.shapeName);
        origin = other.origin;
    }

    return *this;
}

const char* Shape::getName() const {
    return shapeName;
}

const Point& Shape::getOrigin() const {
    return origin; 
}

void Shape::display() const {
    cout << "Shape Name: " << shapeName << "\n";
    origin.display();
}

int Shape::distance(const Shape& other) {
    int distance = origin.distance(other.origin);
    return distance;
}

int Shape::distance(const Shape& shape, const Shape& other_shape) {
    int distance = Point::distance(shape.origin, other_shape.origin);
    return distance;
}

void Shape::move(int dx, int dy) {
    origin.set_x(origin.get_x() + dx);
    origin.set_y(origin.get_y() + dy);
}
