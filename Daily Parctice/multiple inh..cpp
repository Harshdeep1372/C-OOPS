#include <iostream>

using namespace std;

class student
{
	public:
		int rollno,maths,science;
		void get_data()
		{
			
			cout<<"\n enter rollno:";
			cin>>rollno;
			
			cout<<"\n enter maths marks:";
			cin>>maths;
			
			cout<<"\n enter science marks:";
			cin>>science;
			
    	}
}; 

class sports
{

public:
	int spmarks;
	void get_spmarks()
	{
		cout<<"\n enter sports marks:";
		cin>>spmarks;
	}
};

class statement : public student, public  sports
{
	public:
	int total;
	void calculate_total()
	{
		total= maths+science+spmarks;
	 }
	 void print_data()
	 {
	 	cout<<"\n rollno:"<<rollno;
	 	cout<<"\n total:"<<total;
	  } 
	
};	
main()
{
	statement obj1;
	
	obj1.get_data();
	obj1.get_spmarks();
	obj1.calculate_total();
	obj1.print_data();
	
}	
	
	
	
	
	
	
	
	
	
	
	
