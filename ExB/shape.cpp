#include "shape.h"
#include <iostream>
#include <cstring> // Include for strlen and strcpy

using namespace std;

// Constructor
Shape::Shape(const char* name, int x, int y)
    : xCoordinate(x), yCoordinate(y) {
    shapeName = new char[strlen(name) + 1];
    strcpy(shapeName, name);
}

// Destructor
Shape::~Shape() {
    delete[] shapeName;
}

// Copy Constructor
Shape::Shape(const Shape& other)
    : xCoordinate(other.xCoordinate), yCoordinate(other.yCoordinate) {
    shapeName = new char[strlen(other.shapeName) + 1];
    strcpy(shapeName, other.shapeName);
}

Shape& Shape::operator=(const Shape& other) {
    if (this == &other) return *this;

    delete[] shapeName;
    shapeName = new char[strlen(other.shapeName) + 1];
    strcpy(shapeName, other.shapeName);
    xCoordinate = other.xCoordinate;
    yCoordinate = other.yCoordinate;

    return *this;
}

// Getters
int Shape::get_x() const {
    return xCoordinate;
}

int Shape::get_y() const {
    return yCoordinate;
}

char* Shape::getName() const {
    return shapeName;
}

// Display function
void Shape::display() const {
    cout << "Shape Name: " << shapeName << "\n";
    cout << "Coordinates: (" << xCoordinate << ", " << yCoordinate << ")\n";
}

// Distance function
double Shape::distance(const Shape& other) {
    int dx = xCoordinate - other.xCoordinate;
    int dy = yCoordinate - other.yCoordinate;
    return 0;//sqrt(dx * dx + dy * dy);
}

// Move function
void Shape::move(int dx, int dy) {
    xCoordinate += dx;
    yCoordinate += dy;
}
