#include <iostream>
#include "point.h"

class Shape{
    private:
    Point origin;
    char* shapeName;

    public:

    //constructor
    Shape(const char* name, const Point& originPoint);

    //destructor
    ~Shape();

    // Copy Constructor
    Shape(const Shape& other);

    // Copy Assignment Operator
    Shape& Shape::operator=(const Shape& other);

    Point Shape::getOrigin() const;

    char* getName() const;

    void display() const;

    double distance (Shape& other);

    static double distance (Shape& the_shape, Shape& other);

    void move (double dx, double dy);


};