#include<iostream>
using namespace std;
class student{
	public:
	 
	 int rollno;
	 float per;
	 // student(){ 
//	 cout<<"\n simple constructor";
			//}
	student(int a, int b){
		rollno = a;
		per = b;
		
	}
	void printData()
	{
		cout<<"\n rollno :"<<rollno<<"\n per :"<<per;
	}			
};
main(){
	int a;
	float b;
	cout<<"enter no and per :";
	cin>>a;
	cin>>b;
	student s1(a,b);
	s1.printData();
	student s2(67,33);
	s2.printData();
	
}
