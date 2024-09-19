#include <iostream>
#include "point.h"

class Shape{
    private:
    Point origin;
    char* shapeName;

    public:
    
    Shape(const char* name, Point &originPoint);

    ~Shape();

    Shape& operator=(const Shape& other);

    Point getOrigin();

    char* getName();

    void display() const;

    double distance (Shape& other);

    static double distance (Shape& the_shape, Shape& other);

    void move (double dx, double dy);


};