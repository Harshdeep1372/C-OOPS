// PROGRAM FOR COUNT BLANK SPACE, TOTAL Character, Digits.....
#include<iostream>
using namespace std;

 int main()
{
	char name[10];
	int i,c=0,d ,length=0;
	cout<<"Enter the string :";
	gets(name);
	for(i=0;name[i]!='\0';i++) // LOOP FOR Total Character 
	{
			if(name[i]==' ')
			{
				continue;
			}
			
			if(name[i]>'0' && name[i]<'9')
			{
				continue;
			}
			
		length++;
	}
	
	for(i=0;name[i]!='\0';i++) //LOOP FOR SPACE COUNT
	{
		if(name[i]==' ')
		{
			c++;
		}
	}
	
	for(i=0;name[i]!='\0';i++) //DIGIT COUNT LOOP
	
	{
		if(name[i]>'0' && name[i]<'9')
		{
			d++;
		}
	}
	cout<<"Total Character :"<<length;
	cout<<"\n Blankspace is :"<<c;
	cout<<"\n Digit is :"<<d;
}
