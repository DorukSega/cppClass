#ifndef circle_h
#define circle_h
class Circle {
   private:
    double radius;
    const double PI = 3.14;

   public:
    Circle();
    Circle(double r);
    double getArea();
    double getPerimeter();
    double getDiameter();
    double getRadius();
    void setRadius(double r);
    double getPI();
};

#endif