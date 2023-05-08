#include<iostream>
using namespace std;
class student{
	public:
		int rollno,m1,m2,m3,total,per;
		
		student(){
			cout<<"Enter rollno : ";
			cin>>rollno;
			cout<<"m1,m2,m3";
			cin>>m1>>m2>>m3;
		}
		int calculate_total(){
			total = m1+m2+m3;
			return total;
			
		}
		float calculate_per(){
				per = (total*100)/300;
				return	per;	
		}
};
main(){
	student s1,s2;
	cout<<"Total :"<<s1.calculate_total();
	cout<<"Percentage : "<<s1.calculate_per();
	
	cout<<"Total :"<<s2.calculate_total();
	cout<<"Percentage : "<<s2.calculate_per();
	
	
}
