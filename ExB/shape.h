#ifndef SHAPE_H
#define SHAPE_H

#include "point.h"
#include <iostream>
#include <cstring>

class Shape {
private:
    char* shapeName;
    Point xPoint;
    Point yPoint;

public:
    // Constructor
    Shape(const char* name, const Point& xPoint, const Point& yPoint);

    // Destructor
    ~Shape();

    // Copy Constructor
    Shape(const Shape& other);

    Shape& operator=(const Shape& other);

    // Getters
    Point get_xPoint() const;
    Point get_yPoint() const;
    char* getName() const;

    // Display function
    void display() const;

    // Distance function (needs implementation)
    double distance(Shape& other);
    double distance(Shape& the_shape, Shape& other);

    // Move function (needs implementation)
    void move(double dx, double dy);
};

#endif // SHAPE_H
