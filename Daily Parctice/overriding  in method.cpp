#include<iostream>
using namespace std;
class A
{
	public:
		void add(int a)
		{
			cout << "Value :"<< a+10<<endl;
		}
};
class B : public A
{
	public:
		
		void add(int a)
		{
			A::add(56);
			cout << "Value :"<< a*10<<endl;
		}
};
int main()
{
	B obj;
	
	obj.add(12);
	
	return 0;
}
