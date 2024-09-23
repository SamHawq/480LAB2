#include "shape.h"
using namespace std;

// Constructor
Shape::Shape(const char* name, const Point& xPoint, const Point& yPoint)
    : xPoint(xPoint), yPoint(yPoint) 
{
    shapeName = new char[strlen(name) + 1]; // Allocate memory for shapeName
    strcpy(shapeName, name);                
}

// Destructor
Shape::~Shape()
{
    delete[] shapeName;
}

// Copy Constructor
Shape::Shape(const Shape& other)
    : xPoint(other.xPoint), yPoint(other.yPoint) // Copy the Point objects
{
    shapeName = new char[strlen(other.shapeName) + 1];
    strcpy(shapeName, other.shapeName);
}

Shape& Shape::operator=(const Shape& other)
{
    if (this == &other) return *this; // Check for self-assignment

    // Free existing resources
    delete[] shapeName;

    // Copy the shape data
    shapeName = new char[strlen(other.shapeName) + 1]; // Allocate new memory
    strcpy(shapeName, other.shapeName); // Copy the name
    xPoint = other.xPoint; // Copy the Point objects
    yPoint = other.yPoint;

    return *this; // Return the current object
}

// Getters
Point Shape::get_xPoint() const
{
    return xPoint;
}

Point Shape::get_yPoint() const
{
    return yPoint;
}

char* Shape::getName() const
{
    return this->shapeName;
}

// Display function
void Shape::display() const
{
    cout << "Shape Name: " << shapeName << "\n";
    cout << "X Point: (" << xPoint.get_x() << ", " << xPoint.get_y() << ")\n";
    cout << "Y Point: (" << yPoint.get_x() << ", " << yPoint.get_y() << ")\n";
}

// Distance function (to be implemented)
double Shape::distance(Shape& other)
{
    // Implementation here
    return 0; // Placeholder return
}

// Move function (to be implemented)
void Shape::move(double dx, double dy)
{
    // Implementation here
}
