#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include "shape.h"
#include "point.h"

class Circle : public Shape {
    public:
        Circle(Point p, int r): c{p}, radius{r} {}

        Point center() const { return c; }
        void move(Point to);
        void draw() const { std::cout << c.get_x() << std::endl; };
        void rotate(int angle) {}
    private:
        Point c; // center
        int radius;
};

#endif