#include<iostream>
using namespace std;

 int main()
{
	char name[10];
	int i, length=0;
	cout<<"Enter the string :";
	gets(name);
	for(i=0;name[i]!='\0';i++)
		{
			if(name[i]==' ')
			{
				continue;
			}
			
		length++;
		}
	cout<<"Total length of string :"<<length;
}
