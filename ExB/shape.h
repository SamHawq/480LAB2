#ifndef SHAPE_H
#define SHAPE_H

#include "point.h"

class Shape {
private:
    char* shapeName;
    int xCoordinate; 
    int yCoordinate; 

public:
    Shape(const char* name, int x, int y);
    virtual ~Shape();
    Shape(const Shape& other);
    Shape& operator=(const Shape& other);
    
    int get_x() const; 
    int get_y() const; 
    char* getName() const;

    virtual void display() const;
    double distance(const Shape& other);
    void move(int dx, int dy);
};

#endif 
