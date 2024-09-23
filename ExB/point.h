#ifndef POINT_H
#define POINT_H

class Point {
private:
    int x;
    int y;

public:
    Point(const int& x, const int& y);
    ~Point();

    int get_x() const;
    int get_y() const;
    void set_x(int x);
    void set_y(int y);

    void display() const;

    static int distance_x(Point point1, Point point2);
    static int distance_y(Point point1, Point point2);
    int distance(const Point& point2);
    static int distance(Point point1, Point point2);

    static int counter(int inc_dec);
};

#endif // POINT_H
