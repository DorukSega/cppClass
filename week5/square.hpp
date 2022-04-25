#ifndef square_h
#define square_h
class Square {
   private:
    int edge;

   public:
    Square();
    Square(int e);
    ~Square();
    int getEdge();
    void setEdge(int e);
    int getArea();
    int getPerimeter();
};

#endif