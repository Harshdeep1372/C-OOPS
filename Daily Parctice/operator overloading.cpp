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
		//passing object to function 
		void add(A obj)
		{
			cout<<i+obj.i;
		}
};
int main()
{
	A obj1(12);
	A obj2(3);
	
	obj1.add(obj2);
	
	return 0;
}
