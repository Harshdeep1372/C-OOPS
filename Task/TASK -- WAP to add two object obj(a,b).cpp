//WAP add two object like obj(12,2)+obj(2,4)
//output --> obj(14,6)


#include <iostream>
using namespace std;
class MyObject 
{
private:
    int x;
    int y;
public:
    MyObject(int a = 0, int b = 0) 
	 {
	 	x=a;
		y=b;
	 }

    MyObject operator+(MyObject& other)  {
        int sum_x = x + other.x;
        int sum_y = y + other.y;
        return MyObject(sum_x, sum_y);
    }

    void print() 
	{
        cout<<"obj"<<"("<<x<<","<<y<<")";
    }
};

int main() {
    MyObject obj1(12, 2);
    MyObject obj2(2, 4);
    MyObject obj3 = obj1 + obj2;
    obj3.print();

    return 0;
}
