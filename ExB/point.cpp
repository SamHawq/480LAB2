#include "point.h"
#include "graphicsWorld.h"
#include <assert.h>
#include <iostream>

using namespace std;


/*Point::Point(const float& x, const float& y, const int& id)
    : x(x), y(y), id(id)
{
    counter(1);
}*/

Point::Point(const int& x, const int& y)
    : x(x), y(y)
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

int Point::get_x() const
{
    return this->x;
}

int Point::get_y() const
{
    return this->y;
}

void Point::set_x(int x)
{
    this->x = x;
}

void Point::set_y(int y)
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

int Point::distance_x(Point point1, Point point2) //should be x and y in both funcs?
{
    int distance = point1.get_x() - point2.get_x();
    if(distance < 0)
        distance = distance*(-1);
    return distance;
}

int Point::distance_y(Point point1, Point point2)
{
    int distance = point1.get_y() - point2.get_y();
    if(distance < 0)
        distance = distance*(-1);
    return distance;
}

int Point::distance(Point point1, Point point2){
    //cout << "Distance along X-axis: " << distance_x(point1, point2) << endl;
    //cout << "Distance along Y-axis: " << distance_y(point1, point2) << endl;
    return 0;
}

int Point::distance(const Point& point2)
{
    //cout << "Distance along X-axis: " << distance_x(*this, point2) << endl;
    //cout << "Distance along Y-axis: " << distance_y(*this, point2) << endl;
    return 0;
}



