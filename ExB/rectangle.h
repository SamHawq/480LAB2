#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape {
private:
    double sideA;
    double sideB;

public:
    Rectangle(int x, int y, double sideA, double sideB, const char* name);
    ~Rectangle();
    Rectangle(const Rectangle& other);
    Rectangle& operator=(const Rectangle& other);
    
    double area() const;
    double perimeter() const;
    double getSide_a() const;
    void setSide_a(double side_a);
    double getSide_b() const;
    void setSide_b(double side_b);
    void display() const; 
};

#endif // RECTANGLE_H
