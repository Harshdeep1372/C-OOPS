#include<iostream>
using namespace std;

class A{
	int a=23;
	
	//declartion of friend function
	friend void display(A &obj);
};

//defination of friend function

void display(A &obj)
{
	obj.a=78;
	cout<<obj.a;
}

int main()
{
	A obj1;
	display (obj1);
	return 0;
}
