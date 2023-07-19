#include <iostream>
#include <set>
#include <memory>
#include "container.h"
#include "vector_container.h"
#include "list_container.h"
#include "point.h"
#include "circle.h"
#include "shape.h"
#include "smiley.h"

void use(Container& c)
{
    const int sz = c.size();
    for (int i=0; i!=c.size(); ++i)
            std::cout << c[i] << '\n';

}

enum class Kind { circle, triangle, smiley };

std::map<std::string, Kind> kindMap = {
    {"Circle", Kind::circle},
    {"Triangle", Kind::triangle},
    {"Smiley", Kind::smiley}
};

Kind get_kind(std::string kind_name)
{
    return kindMap.find(kind_name)->second;
}

std::unique_ptr<Shape> read_shape(std::string& shape_name) {
    Point p(1, 3);
    std::set<std::string> enum_name;
    Kind kind = get_kind(shape_name);

    switch(kind) {
        case Kind::circle:
            return std::unique_ptr<Shape>{new Circle{p, 2}};
        case Kind::smiley:
            return std::unique_ptr<Shape>{new Smiley{p, 2}};
        default:
            std::cout << "This kind of shape isn't supported\n";
            return nullptr;
    }

    return nullptr;
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

    std::string shape_name;
    std::getline(std::cin>>std::ws, shape_name);

    auto shape = read_shape(shape_name);

    shape->draw();
    return 0;
}