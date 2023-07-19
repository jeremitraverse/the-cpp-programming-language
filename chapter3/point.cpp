#include "point.h"

Point& Point::operator=(Point& target) {
    x = target.x; y = target.y;

    return *this;
}