/* 
* File Name: square.h
* Assignment: Lab 2 Exercise B
* Lab Section: B02
* Completed by: Samiul Haque, Elias Poitras-Whitecalf
* Development Date: Sept 23, 2024
*/
#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square : public Shape {
private:
    int sideA;

public:
    Square(int x, int y, int side, const char* name);
    ~Square();

    Square(const Square& other); 
    Square& operator=(const Square& other);
    
    int area() const;
    int perimeter() const;
    int getSide_a() const;
    void setSide_a(int side_a);
    void display() const; 
    void display2() const;
};

#endif 
