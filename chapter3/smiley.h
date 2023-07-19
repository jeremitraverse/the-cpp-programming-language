#ifndef SMILEY_H
#define SMILEY_H

#include "circle.h"
#include "shape.h"
#include "point.h"
#include <vector>

class Smiley: public Circle {
    public:
        Smiley(Point p, int r): Circle{p, r}, mouth{nullptr}, c{p} {}
        // Freeing pointers
        ~Smiley()
        {
            delete mouth;
            for (auto p : eyes) delete p;
        }

        void move(Point to);
        void draw() const;

        void add_eye(Shape* s) { eyes.push_back(s); }
        void set_mouth(Shape* s) { mouth=s; }

    private:
        std::vector<Shape*> eyes;
        Shape* mouth;
        Point c;
};

#endif
