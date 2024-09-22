#include <iostream>
#include "point.h"
#include "shape.h"

class Rectangle : public Shape{    //square inherits from shape, can use public and protected members of shape
    private:                    //extends shape class by adding square specific methods
    double sideA;
    double sideB;

    public:
    
    //constructor
    Rectangle(const char* name, const Point& originPoint, double sideA, double sideB);


    ~Rectangle();

    double area() const;    //rectangle specific method

    double perimeter() const;

    double getSide_a() const;
    void setSide_a(double side_a);

    double getSide_b() const;
    void setSide_b(double side_b);

    void display() const;
};