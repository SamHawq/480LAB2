/* 
* File Name: point.h
* Assignment: Lab 2 Exercise B
* Lab Section: B02
* Completed by: Samiul Haque, Elias Poitras-Whitecalf
* Development Date: Sept 23, 2024
*/
#ifndef POINT_H
#define POINT_H

class Point {
private:
    int x;
    int y;
    int id;
    static int counter;

public:
    Point(int x, int y);
    ~Point();
    Point& operator=(const Point& other);

    static int counter_func();
    int get_x() const;
    int get_y() const;
    int get_id() const;

    void set_x(int x);
    void set_y(int y);

    void display() const;

    static int distance_x(Point point1, Point point2);
    static int distance_y(Point point1, Point point2);

    static int distance(Point point1, Point point2);
    int distance(const Point& point2);    
};

#endif
