#include<iostream>
using namespace std;

template <typename T>
class Flax{
	public:
		T a,b;
		
		void input()
		{
			cout<<"Enter Value = "; cin>>a;
			cout<<"Enter Value = "; cin>>b;
		}
		void display()
		{
			cout<<"Value = "<<a<<endl;
			cout<<"Value = "<<b<<endl;
		}
};

int main()
{
	cout<<"\n\n------for int------\n\n";
	Flax<int>f1;
	f1.input();
	f1.display();
	
	cout<<"\n\n------for float------\n\n";
	Flax<float>f2;
	f2.input();
	f2.display();
	
	cout<<"\n\n------for char------\n\n";
	Flax<char>f3;
	f3.input();
	f3.display();
	
	return 0;			
}
