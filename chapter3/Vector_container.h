#ifndef VECTOR_CONTAINER_H 
#define VECTOR_CONTAINER_H 
#endif

#include <initializer_list>

#include "Container.h"
#include "Vector.h"

class Vector_container : public Container {
    public:
        Vector_container(std::initializer_list<double> s) : v(s) {};
        ~Vector_container();

        size_t size() const { return v.size(); }; 
        double& operator[](int i) { return v[i]; };
    private:
        Vector v;
};