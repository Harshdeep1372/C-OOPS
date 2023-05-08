/* write a program to add objects using a method*/

/*these operators never over load 
    . -->>membeship operator
	::  -->>scope resolution operator
	?:  -->>ternary operator
	sizeof()  -->>size of operator
	.*  -->> pointer to member operator

*/	
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
		void operator + (A obj)
		{
			cout<<i+obj.i;
		}
};
main()
{
	A obj1(12);
	
	A obj2(8);
	
	obj1+obj2;
	
	cout<<"\n";
	system("pause");
}
