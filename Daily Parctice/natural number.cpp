#include<iostream>
using namespace std;

int natural(int num)
{
	
	if(num<=0)
	{
		return 0;
	
	}
	else 
	{
		return num + natural(num-1) ;
	}
}
int main()
{
	int ip;
	cout<<"enter number to find number :";
	cin>>ip;
	
	cout<<"sum of number is :"<<natural(ip);
	return 0;
}


