#include <iostream>
using namespace std;

/* first
#include "square.hpp"
int main() {
    Square s1;
    s1.setEdge(6);
    cout << "edge: " << s1.getEdge() << endl;
    cout << "area: " << s1.getArea() << endl;
    cout << "perimeter: " << s1.getPerimeter() << endl;

    Square s2(7);
    cout << "edge: " << s2.getEdge() << endl;
    cout << "area: " << s2.getArea() << endl;
    cout << "perimeter: " << s2.getPerimeter() << endl;

    return 0;
}*/

#include "circle.hpp"

int main() {
    Circle c1;
    c1.setRadius(5.5);
    cout << "radius: " << c1.getRadius() << endl;
    cout << "diameter: " << c1.getDiameter() << endl;
    cout << "area: " << c1.getArea() << endl;
    cout << "perimeter: " << c1.getPerimeter() << endl;
    cout << endl;
    Circle c2(3.2);
    cout << "radius: " << c2.getRadius() << endl;
    cout << "diameter: " << c2.getDiameter() << endl;
    cout << "area: " << c2.getArea() << endl;
    cout << "perimeter: " << c2.getPerimeter() << endl;

    return 0;
}
