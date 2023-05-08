#include<stdlib.h>
#include<iostream>
using namespace std;
class A{
	public:
		A()
		{
			cout<<"contructor A "<<endl;
		}
};
class B: public A{
	public: 
	B()
		{
			cout<<"contructor B "<<endl;
		}	
}; 
main()
{
	B obj;	

	cout<<"\n";
	system("pause");
}
