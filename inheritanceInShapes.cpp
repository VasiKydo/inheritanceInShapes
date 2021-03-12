#include <iostream>
 
using namespace std;

// Base class
class Shape {
   public:
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }
      
   protected:
      int width;
      int height;
 };

// Derived class
class Rectangle: public Shape {
   public:
      int getRectangleArea() { 
         return (width * height); 
      }
 };
 
 class Square: public Shape {
     public:
       int getSquareArea() {
           return (width * width);
       }
 };

int main(void) {
   Rectangle Rect;
   Square sq;
 
   Rect.setWidth(5);
   Rect.setHeight(7);

   // Print the area of the object.
   cout << "Total Rectangle area: " << Rect.getRectangleArea() << endl;
   
   sq.setWidth(4);
   cout << "Total Square Area: " << sq.getSquareArea()  << endl;

   return 0;
}