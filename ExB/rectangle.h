/* 
* File Name: rectangle.h
* Assignment: Lab 2 Exercise B
* Lab Section: B02
* Completed by: Samiul Haque, Elias Poitras-Whitecalf
* Development Date: Sept 23, 2024
*/
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "square.h"

class Rectangle : public Square {
private:
    int sideB;

public:
    Rectangle(int x, int y, int sideA, int sideB, const char* name);
    ~Rectangle();
    Rectangle(const Rectangle& other);
    Rectangle& operator=(const Rectangle& other);
    
    int area() const;
    int perimeter() const;

    int getSide_b() const;
    void setSide_b(int side_b);

    void display() const; 
};

#endif
