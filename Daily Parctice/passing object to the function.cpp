#include<iostream>
using namespace std;

class A{
	public:
		int a=30;
		int b=40;
			

			
};

 void myfun(A obj1, A obj2)
{
		cout<< obj1.a + obj2.b;
}
main()
{
	A o1 , o2;
	myfun(o1, o2);
	return 0;
}

