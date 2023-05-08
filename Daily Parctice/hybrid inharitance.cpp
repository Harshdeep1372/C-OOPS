#include<stdlib.h>
#include<iostream>
using namespace std;
//hybrid inharitance 
class A{
	public:
		void displayA()
		{
			cout<<"class A "<<endl;
		}
	
};
class B : public A{
	public:
		void displayB()
		{
			cout<<"class B "<<endl;
		}
	
};
class C : public A{
	public:
		void displayC()
		{
			cout<<"class C "<<endl;
		}
};
class D : public B,public C{
	public:
		void displayD()
		{
			cout<<"class D "<<endl;
		}
};
main()
{
	D obj;
	obj.B::displayA();//now request for member A is unambiguous
	obj.displayB();
	obj.displayC();
	obj.displayD();
	
	cout<<"\n";
	system("pause");
}
