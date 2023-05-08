#include<iostream>
using namespace std;

int fact(int num)
{
	if(num<=0)
	{
		return 1;
	
	}
	else 
	{
		return num*fact(num-1);
	}
}
int main()
{
	int ip;
	cout<<"enter number to find factorial :";
	cin>>ip;
	
	cout<<"factorial of number is :"<<fact(ip);
	return 0;
}


