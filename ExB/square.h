#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square : public Shape {
private:
    double sideA;

public:
    Square(int x, int y, double side, const char* name);
    ~Square();

    Square(const Square& other); // Copy constructor
    Square& operator=(const Square& other); // Assignment operator
    
    double area() const;
    double perimeter() const;
    double getSide_a() const;
    void setSide_a(double side_a);
    void display() const; 
};

#endif 
