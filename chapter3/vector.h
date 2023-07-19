#ifndef VECTOR_H 
#define VECTOR_H 

#include <algorithm>

// Concrete type - Container
// A Container is a type that contains a collection of elements
// Concrete type because it's representation is part of it's definition
class Vector {
    public:
        Vector(std::initializer_list<double> list)
            :elem{new double[list.size()]}, sz{list.size()}
        {
            std::copy(list.begin(), list.end(), elem);
        }

        // function/operator overloading
        double& operator[](int i) { return elem[i]; };
        size_t size() const { return sz; };
        Vector& operator=(const Vector& a);

        // Destructor - Free memory from the heap
        // User doesn't have to call the destructor, once the 
        // Vector is out of scope, the memory is freed
        ~Vector() {}; 
    private:
        double* elem; // pointer to the elements
        size_t sz;
};
#endif