#include<iostream>
#include<stdlib.h>
using namespace std;
class Rectangle {
 
 

public:
	double length;
  	double width;
  Rectangle(double l, double w) 
  {
    length = l;
    width = w;
  }

  // Copy constructor
  Rectangle(const Rectangle& old) {
    length = old.length;
    width = old.width;
  }

  double Area() 
  {
    return length * width;
  }
};

int main() {
	float x,y;
	cout<<"enter the value of length and width : ";
	cin>>x;
	cin>>y;
  Rectangle rect1(x,y);
  Rectangle rect2(rect1); // Copy constructor called

  cout<<"Area of rectangle 1 : "<<rect1.Area()<<endl;
  cout<<"Area of rectangle 2 : "<<rect2.Area()<<endl;

  cout<<"\n";
  system("pause");
}
