#include "Vector.h"
#include <stdexcept>

Vector::Vector(int s)
{
    if (s<0) throw std::length_error{"Vector size should be < 0"};
    elem = new double[s];
    sz = s;
}

double& Vector::operator[](int i)
{
    if (i<0 || i>size()) throw std::out_of_range{"Vector::operator[]"};
    return elem[i];
}

int Vector::size()
{
    return sz;
}