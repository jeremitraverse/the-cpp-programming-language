#include <stdexcept>
#include <iostream>
#include <string.h>

#include "list_container.h"

double& List_container::operator[](int i)
{
    for (auto& x: List_container::list) {

        if (i == 0) return x;
        --i;
    }

    throw std::out_of_range("List container");
}