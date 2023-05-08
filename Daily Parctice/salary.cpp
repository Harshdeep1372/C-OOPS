#include<iostream>
using namespace std;
class student
{
	public:
		int rollno;
		float per;
		string name;
		
		void get_value()
		{
			cout<<"\n Enter rollno :";
			cin>>rollno;
			
			cout<<" Enter percentage :";
			cin>>per ;
			
			cout<<"\n Enter name :";
			cin>>name;
		}
		
		void print_value()
		{
			cout<<endl<<"THE ROLL NO. AND PERCENTAGE IS :"<<endl<<"\n Rollno : "<<rollno ;
			cout<<"\n Percentage : "<<per << endl;
			cout<<"\n name: "<<name<<endl;
		}
};
class teacher
{
		public:
		int id;
		float salary;
		
		void get_value()
		{
			cout<<"\n Enter id : ";
			cin>>id;
			
			cout<<"\n Enter salary : ";
			cin>>salary;
		}
		
		void print_value()
		{
			cout<<endl<<"THE ID NO. AND SALARY IS :"<<endl<<"\n Id : "<<id;
			cout<<"\n salary : "<<salary<<endl;
		}
};

main()
{
	student s1,s2;
	s1.get_value();
	s1.print_value();
	s2.get_value();
	s2.print_value();
	
	teacher h1,h2;
	
	h1.get_value();
	h1.print_value();
	
	h2.get_value();
	h2.print_value();
}
