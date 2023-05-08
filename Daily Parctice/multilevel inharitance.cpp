#include<stdlib.h>
#include<iostream>
using namespace std;
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
class C : public B{
	public:
		void displayC()
		{
			cout<<"class C "<<endl;
		}
};

main()
{
	C obj;
	obj.displayA();
	obj.displayB();
	obj.displayC();
	
	cout<<"\n";
	system("pause");
}
