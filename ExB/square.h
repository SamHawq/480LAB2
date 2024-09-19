#include <iostream>
#include "point.h"
#include "shape.h"

class Square{
    private:
    Point origin;
    char* shapeName;

    public:
    
    Square(Shape &square);

    ~Square();

    Point Square::area()
    {
        
    }

    Point getOrigin();

    char* getName();

    void display();
};