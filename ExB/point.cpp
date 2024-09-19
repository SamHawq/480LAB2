#include "point.h"
#include <assert.h>
#include <iostream>

using namespace std;


Point::Point(const float& x, const float& y, const int& id)
    : x(x), y(y), id(id)
{
    counter(1);
}

Point::~Point()
{
    counter(-1);
}

void Point::display() const
{
    cout << "X-coordinate: " << this->get_x() << "\n";
    cout << "Y-coordinate: " << this->get_y() << "\n";
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
    //cout << "\n" << x << "\n";
    return x;
}

float Point::distance_x(float point1, float point2) //should be x and y in both funcs?
{
    static float distance = point1 - point2;
    if(distance < 0)
        distance = distance*(-1);
    return distance;
}

float Point::distance_y(float point1, float point2)
{
    float distance = point1 - point2;
    if(distance < 0)
        distance = distance*(-1);
    return distance;
}

main()
{
    Point coord1(56789.22, 57893.33, 1234567);
    Point coord2(10, 10, 2);
    
    //float x = Point::distance_x(coord1.get_x(), coord2.get_x());
    
    //cout << "Distance along X-axis: " << Point::distance_x(coord1.get_x(), coord2.get_x()) << endl;
    //cout << "Distance along Y-axis: " << coord1.distance_y(coord1.get_y(), coord2.get_y()) << endl;
    
    cout << coord1.get_x() << "\n";
}
