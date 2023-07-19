#include "vector.h"

Vector& Vector::operator=(const Vector& a)
{
    double* p = new double[a.sz];
    for (int i =0; i!=a.sz; ++i)
        p[i] = a.elem[i]; 
    // elem is automatically set by the constroctor
    delete[] elem;
    elem = p;
    sz = a.sz;
    return *this;
}