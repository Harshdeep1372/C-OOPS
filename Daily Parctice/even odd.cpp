#include<iostream>
using namespace std;

int main()
{
	int a[10];
	int i,n, counteven=0,countodd=0,sumeven=0,sumodd=0;
	
	
	for(i=1;i<=10;i++)
	{
		cout<<"Enter integer   "<<i<<":";
		
		cin>>a[i];
	
		
		if(a[i]%2==0)
		{
			counteven++;
			sumeven=sumeven+a[i];
		}
		
		else
		{
			countodd++;
			sumodd=sumodd+a[i];
		}

		
	}
	cout<<"total even number is"<<":"<<counteven<<endl;
	cout<<"total odd number is"<<":"<<countodd<<endl;
	cout<<"sum even number is"<<":"<<sumeven<<endl;
	cout<<"sum odd number is"<<":"<<sumodd;
	
	
}
