/* write a program to add objects using a method*/
#include<iostream>
#include<stdlib.h>
using namespace std;
class A{
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
main()
{
	A obj1(12);
	
	A obj2(8);
	
	obj1.add(obj2);
	
	cout<<"\n";
	system("pause");
}
