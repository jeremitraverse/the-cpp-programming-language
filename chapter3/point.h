#ifndef POINT_H
#define POINT_H

class Point {
    int x, y;
    public:
        Point(int xval, int yval): x{xval}, y{yval} {};
        Point& operator=(Point &p);
        int get_x() const { return x; };
};

#endif