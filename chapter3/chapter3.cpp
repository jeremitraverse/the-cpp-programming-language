#include <iostream>

#include "Container.h"
#include "Vector_container.h"
#include "List_container.h"
#include "point.h"
#include "Circle.h"

using namespace std;

void use(Container& c)
{
    const int sz = c.size();

    for (int i=0; i!=c.size(); ++i)
            cout << c[i] << '\n';

}

int main()
{
    /*
    Vector_container vc { 10, 9, 8, 7 };
    List_container lc { 10, 9, 8, 7 };
    use(vc);
    use(lc);
    */
    Point p(1, 3);
    Circle c(p, 2);
    c.draw();
    return 0;
}