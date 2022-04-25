#include "circle.hpp"
Circle::Circle() : radius(0.0) {}

Circle::Circle(double r) : radius(r){};

double Circle::getRadius() {
    return radius;
}

void Circle::setRadius(double r) {
    radius = r;
}

double Circle::getPI() {
    return PI;
}

double Circle::getArea() {
    return PI * radius * radius;
}
double Circle::getPerimeter() {
    return PI * 2 * radius;
}
double Circle::getDiameter() {
    return 2 * radius;
}
