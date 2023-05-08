#include<iostream>
using namespace std;

class RBI{
	public:
		//declaration of pure virtual function
		virtual void interest()=0;
};

class SBI : RBI{
	public:
		//defination of pure virtual function
		void interest()
		{
			cout<<"We provide 6% interest on loan "<<endl;
		}
};
class AXIS : RBI{
	public:
		void interest()
		{
			cout<<"We provide 12% interest on loan"<<endl;
		}
};
int main()
{
	SBI obj1;
	AXIS obj2;
	
	obj1.interest();
	obj2.interest();
	return 0;
}
