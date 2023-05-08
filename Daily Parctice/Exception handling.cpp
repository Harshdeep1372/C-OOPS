#include<iostream>
using namespace std;

float div(int a, int b)
{
	if(b==0)
	{
		throw "Can not devide by zero !!!";
	}
	else 
	{
		return a/b;
	}
}
int main()
{
	float n1,n2;
	cout<<"Enter two number :";
	cin>>n1>>n2;
	
	try
	{
		cout<<"Div : "<<div(n1,n2);
	}
	catch(const char*e)
	{
		cout<<"Error : "<<e;
	}
	
	return 0;
	
	
}
