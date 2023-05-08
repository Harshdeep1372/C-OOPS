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

main()
{
	B obj;
	obj.displayA();
	obj.displayB();

	cout<<"\n";
	system("pause");
}
