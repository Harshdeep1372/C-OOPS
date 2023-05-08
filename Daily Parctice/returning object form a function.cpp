#include<iostream>
using namespace std;

class A
{
	public:
		int a=30;
		int b=40;
						
};

A myfun()
{
	A obj;
	obj.a=12;
	obj.b=54;
	
	return obj;	
}

main()
{
	A obj1;
	
	cout<<obj1.a<<endl<<obj1.b<<endl;
	obj1= myfun();
	cout<<obj1.a<<endl<<obj1.b<<endl;
	
	return 0;
}

