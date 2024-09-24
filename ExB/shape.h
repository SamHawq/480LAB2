/* 
* File Name: shape.h
* Assignment: Lab 2 Exercise B
* Lab Section: B02
* Completed by: Samiul Haque, Elias Poitras-Whitecalf
* Development Date: Sept 23, 2024
*/
#ifndef SHAPE_H
#define SHAPE_H

#include "point.h"

class Shape {
private:
    char* shapeName;
    Point origin; 

public:
    Shape(const char* name, int x, int y);
    ~Shape();
    Shape(const Shape& other);
    Shape& operator=(const Shape& other);

    const Point& getOrigin() const;
    const char* getName() const;

    void display() const;
    int distance(const Shape& other);
    static int distance(const Shape& shape, const Shape& other_shape); 

    void move(int dx, int dy);
};

#endif
