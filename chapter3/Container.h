#ifndef CONTAINER_H 
#define CONTAINER_H 
#endif
// Virtual class
// A class with pure virtual function is called an abstract class
// A class that provides an interface to a variety of other classes
// is often called a polymorphic type 
#include <stdlib.h>
#pragma once
class Container {
    public:
        // virtual function ending with =0 means that the class 
        // derived from Container must implement that function
        virtual double& operator[](int) = 0;    // pure virtual function
        virtual size_t size() const = 0;           // const member function
        virtual ~Container() {};                   // destructor
};

/*
This class can be used like this
void use(Container& c)
{
    const int sz = c.size();
    for (int i=0; i!=sz; ++i)
        cout << c[i] << '\n';
}
*/