#include "point.h"
#include <iostream>

Point::Point(const float& x, const float& y, const int& id)
    : x(x), y(y), id(id)
{

}

Point::~Point()
{

}

char* Point::display() const
{
    std::cout << "X-coordinate: " << this->get_x() << "\n";
    std::cout << "Y-coordinate: " << this->get_y() << "\n";
}

float Point::get_x() const
{
    return this->x;
}

float Point::get_y() const
{
    return this->y;
}

void Point::set_x(float x)
{
    this->x = x;
}

void Point::set_y(float y)
{
    this->y = y;
}

int Point::counter(int inc_dec)
{
    static int x;
    x += inc_dec;
    return x;
}

float Point::distance_x(float point1, float point2)
{

}

float Point::distance_y(float point1, float point2)
{

}
