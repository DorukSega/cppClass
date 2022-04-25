#include "square.hpp"

Square::Square() : edge(0) {}

Square::Square(int e) : edge(e) {}

int Square::getEdge() {
    return edge;
}

void Square::setEdge(int e) {
    edge = e;
}

int Square::getArea() {
    return edge * edge;
}

int Square::getPerimeter() {
    return edge * 4;
}

Square::~Square() {}