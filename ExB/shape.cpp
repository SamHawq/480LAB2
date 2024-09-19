#include "shape.h"
#include <iostream>
using namespace std;

Shape::Shape(const char* name, Point &originPoint)
{

}

Shape::~Shape()
{

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
