/*
this pointer : 
				"it is the pointer which gives refrence to current class members"
				
				representation : this keyword
*/
#include<stdlib.h>
#include<iostream>
using namespace std;
class A{
	public:
		//class variable
		int p;
		
		A(int p)
		{
			this->p=p;//-> pints to operator
		}
		
		//class method
		void display()
		{
			cout<<"value : "<<p;
		}
};				
main()
{
	A obj(56);
	
	obj.display();
	
	cout<<"\n";
	system("pause");
}
