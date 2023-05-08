#include<iostream>
using namespace std;

int main()
{
	char name[10];
	int i, c1=0, c2=0;
	cout<<"\nenter the name : ";
	gets(name);
	
	cout<<"check bellow latter";
	
	for(i=0;name[i]!='\0';i++)
	
	{
		if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
		{
			c1++;
			
		}
		else
		{
			c2++;
			
		}			
	}
	cout<<"\nvowels is : "<<c1;
	cout<<"\nconstants is :"<<c2;
}


