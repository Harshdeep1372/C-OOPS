#include<iostream>
using namespace std;
class A{
	public:
		int p;
		
		A (int p)
		{
			this->p=p;	
		}
	
		
		void display()
		{
			cout<<"value"<<p;
		}
		
};

main()
{
	A obj(56);
	obj.display();
}
