#include "shape.h"
#include <iostream>
#include <string.h>
using namespace std;

//constructor
Shape::Shape(const char* name, const Point& originPoint)
    : origin(originPoint) 
{
    shapeName = new char[strlen(name) + 1]; // Allocate memory for shapeName
    strcpy(shapeName, name);                
}

//destructor
Shape::~Shape()
{
    delete[] shapeName;
}

// Copy Constructor
Shape::Shape(const Shape& other)
    : origin(other.origin) // Copy the Point object
{
    shapeName = new char[strlen(other.shapeName) + 1];
    strcpy(shapeName, other.shapeName);
}

// Copy Assignment Operator
Shape& Shape::operator=(const Shape& other) {
    if (this == &other) return *this; // Check for self-assignment

    delete[] shapeName; // Free existing memory

    origin = other.origin; // Copy the Point object
    shapeName = new char[strlen(other.shapeName) + 1];
    strcpy(shapeName, other.shapeName);

    return *this;
}

Point Shape::getOrigin() const
{
    return origin;
}

char* Shape::getName() const
{
    return this->shapeName;
}

void Shape::display() const
{
    cout << "Shape Name: " << shapeName << "\n";
    cout << "Origin: (" << origin.get_x() << ", " << origin.get_y() << ")\n";
}

double Shape::distance (Shape& other)
{

}

double Shape::distance (Shape& the_shape, Shape& other)
{

}

void Shape::move (double dx, double dy)
{

}
