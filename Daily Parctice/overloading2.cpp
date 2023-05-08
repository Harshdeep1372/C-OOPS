// w.a.p to add obj using method

#include<iostream>
using namespace std;

class A
{
	public:
		int i;
		A(int num)
		{
			i=num;			
		}
		// passing object to function
		void operator +(A obj)
		{
			cout<<i+obj.i;
		}
};
int main()
{
	A obj1(15);
	A obj2(5);
	
	obj1+obj2;
}
