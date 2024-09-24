/* 
* File Name: point.cpp
* Assignment: Lab 2 Exercise B
* Lab Section: B02
* Completed by: Samiul Haque, Elias Poitras-Whitecalf
* Development Date: Sept 23, 2024
*/
#include "point.h"
#include "graphicsWorld.h"
#include <assert.h>
#include <iostream>

using namespace std;


int Point::counter = 1000;

int Point::counter_func() {
    return counter - 1000;
}

//ctor
Point::Point(int x, int y)
    : x(x), y(y), id(++counter){}

//dtor
Point::~Point(){}

//assignment op
Point& Point::operator=(const Point& other) {
    if (this != &other) {
        x = other.x;
        y = other.y;
        id = other.id;
    }
    return *this;
}

void Point::display() const
{
    cout << "X-coordinate: " << static_cast<double>(x) << ".00\n"; //not formatted in "expected" display
    cout << "Y-coordinate: " << static_cast<double>(y) << ".00\n";
}

int Point::get_x() const
{
    return x;
}

int Point::get_y() const
{
    return y;
}

void Point::set_x(int x)
{
    this->x = x;
}

void Point::set_y(int y)
{
    this->y = y;
}

int Point::get_id() const
{
    return id;
}

int Point::distance_x(Point point1, Point point2) 
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
    int distance = distance_x(point1, point2) + distance_y(point1, point2);
    return distance;
}

int Point::distance(const Point& point2)
{
    //cout << "Distance along X-axis: " << distance_x(*this, point2) << endl;
    //cout << "Distance along Y-axis: " << distance_y(*this, point2) << endl;
    int distance = distance_x(*this, point2) + distance_y(*this, point2);
    return distance;
}



