#include <iostream>
using namespace std;
class Rectangle 
{
public:
	
	double length;
	double a;
	double width;
	double b;
public:
  double length_;
  double width_;
  Rectangle(double length, double width) : a(length), b(width) {}
  Rectangle(const Rectangle& other) : a(other.a), b(other.b) {}

//  double getLength() 
//  const {return length_; }
//	Rectangle(double length, double width){
//		length = a;
//		width = b;
//	Rectangle(const length &old){
//			length_=old.length;
//		}
//			
//			Rectangle(const width &old){
//			width_=old.width;
//			}
//  double getWidth() 
//  const { return width_; }

  double area()  
  {
    return a* b;
  }


};

int main() {
  Rectangle rect1(5, 3);
  Rectangle rect2(rect1); // copy constructor is called here

  cout << "Area of rect1: " << rect1.area() << endl;
  cout << "Area of rect2: " << rect2.area() << endl;

 return 0; 
}

