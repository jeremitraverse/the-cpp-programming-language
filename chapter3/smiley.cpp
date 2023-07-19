#include <iostream>

#include "smiley.h"

void Smiley::draw() const
{
    std::cout << "Drawing a smiley !\n";
    Circle::draw();
    for (auto p: eyes)
        p->draw();
    mouth->draw();
}

void Smiley::move(Point to)
{
    c = to;
}