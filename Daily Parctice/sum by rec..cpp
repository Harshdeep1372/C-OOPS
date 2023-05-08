#include<iostream>
using namespace std;

int sum(int n);

int main() 
{
    int num;
    cout<<"Enter a non-negative integer:\n";
    cin>>num;
    
    if (num < 0) 
	{
        cout<<"Error: Invalid input.\n";
        return 1;
    }
    
    int result = sum(num);
    cout<<"sum  \n"<<num<<result;
    return 0;
}

int sum(int n) 
{
	int sum;
	sum=sum+n;
}

