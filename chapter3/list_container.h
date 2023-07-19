#ifndef LIST_CONSTAINER_H
#define LIST_CONTAIENER_H
#endif

#include "container.h"
#include <list>
#include <initializer_list>
#include <stdlib.h>

class List_container : public Container
{
    std::list<double> list;
    public:
        List_container(std::initializer_list<double> list) : list{list} {}
        size_t size() const { return list.size(); }
        ~List_container() {};
        double& operator[](int i);
};