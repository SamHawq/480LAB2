#include <iostream>

class Point {
private:
    float x;
    float y; 
    int id;

public:
    Point(const float& x, const float& y, const int& id);
    ~Point(); // ? unnecessary?

    char* display() const;
    //PROMISES:
    //  returns x and y coordinates in the below format
    //      X-coordinate: #####.##
    //      Y-coordinate: #####.##

    float get_x(float x) const;
    float get_y(float y) const;

    void set_x(float x);
    void set_y(float y);

    int counter(); /* ***************************** */
    //PROMISES:
    //  returns number of point objects at any given point

    static float distance_x(float point1, float point2);
    float distance_y(float point1, float point2);

};