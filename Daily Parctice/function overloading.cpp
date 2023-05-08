#include<stdlib.h>
#include<iostream>
using namespace std;
//method of over loding 
class A
{
	public:
		
		void add(int a)
		{
			cout<<"value : "<<a<<endl;
		}
		void add(int a1,int a2)
		{
			cout<<"value : "<<a1+a2<<endl;
		}
		void add(int a1,int a2,int a3)
		{
			cout<<"value : "<<a1+a2-a3<<endl;
		}
};
main()
{
	A obj;
	obj.add(12,12,4);
	obj.add(12,5);
	obj.add(45);
	
	cout<<"\n";
	system("pause");
}	
