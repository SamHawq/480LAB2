#include "shape.h"
#include <iostream>
#include <string.h>
using namespace std;

Shape::Shape(const char* name, Point &originPoint)
{

}

Shape::~Shape()
{
    delete[] shapeName;
}

Shape::Shape(const Shape& other)
    : origin(other.origin) // Copy the Point object
{
    shapeName = new char[strlen(other.shapeName) + 1];
    strcpy(shapeName, other.shapeName);
}

Point Shape::getOrigin()
{
    return this->display();
}

char* Shape::getName()
{
    return this->shapeName;
}

void Shape::display()
{
    cout << "Shape Name: " << this->getName() << "\n";
    cout << this->getOrigin() << "\n";
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
