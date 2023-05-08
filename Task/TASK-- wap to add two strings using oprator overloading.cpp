/* wap to add two strings using oprator overloading */	
#include<iostream>
#include<stdlib.h>
#include<cstring>
using namespace std;
class A{
	public:
		string i;
		A(string num)
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
	A obj1("hello ");
	
	A obj2("world");
	
	obj1+obj2;
	
	cout<<"\n";
	system("pause");
}
