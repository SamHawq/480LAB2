#include <iostream>
#include "point.h"
#include "shape.h"

class Square : public Shape{    //square inherits from shape, can use public and protected members of shape
    private:                    //extends shape class by adding square specific methods
    double sideA;

    public:
    
    //constructor
    Square(int x, int y, double side, const char* name);

    ~Square();

    double area() const;    //square specific method

    double perimeter() const;

    double getSide_a() const;
    void setSide_a(double side_a);

    void display() const;
};