#include<iostream>
using namespace std;
class student{
	public:
		int rollno,m1,m2,m3,total;
		float per;
		
		void get_data(int a,int b,int c,int d){
			rollno = a;
			m1 = b;
			m2 = c;
			m3 = d;
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
	int x,y,z,w;
	student s1,s2;
	
		cout<<"Enter rollno :";
	cin>>x;
		cout<<"\n Enter m1 :";
	cin>>y;
		cout<<"\n Enter m2 :";
	cin>>z;
		cout<<"\n Enter m3 :";
	cin>>w;
	
	s1.get_data(x,y,z,w);
	cout<<endl<<"Total :"<<s1.calculate_total()<<cendl;
	cout<<endl<<"Percentage : "<<s1.calculate_per();
}
