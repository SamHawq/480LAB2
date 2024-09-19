#include "square.h"
#include "shape.h"
#include <iostream>
using namespace std;

Square::Square(Shape &square)
{

}

Square::~Square()
{

}

Point Square::area()
{
    
}

char* Square::getName()
{
    return this->shapeName;
}

void Square::display()
{
    cout << "Shape Name: " << this->getName() << "\n";
    cout << this->getOrigin() << "\n";
}


