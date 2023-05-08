#include<iostream>
using namespace std;

class Address{
	public:
		string city, state;
		int pin;
		
		//constructor
		
		Address(string city, string state, int pin)
		{
			this->city=city;
			this->state=state;
			this->pin=pin;
		}
};

class Employee{
	public:
		string e_name;
		int emp_id;
		Address *address;
		
		Employee(string e_name, int emp_id, Address *address)
		{
			this->e_name=e_name;
			this->emp_id=emp_id;
			this->address=address;
			
		}

		void displayE()
	{
		cout<<"\n\n---------Employee Data--------"<<endl;
		cout<<"Name :"<<e_name<<endl;
		cout<<"Id :"<<emp_id<<endl;
		cout<<"City :"<<address->city<<endl;
		cout<<"Pin :"<<address->pin<<endl;
		cout<<"State :"<<address->state<<endl;
	
	}
};

class Student{
	public:
		string s_name;
		int stu_id;
		Address *address;
		
		Student(string s_name, int stu_id, Address *address)
		{
			this->s_name=s_name;
			this->stu_id=stu_id;
			this->address=address;
		}
		
		void displayS()
	{
		cout<<"\n\n---------Employee Data--------"<<endl;
		cout<<"Name :"<<s_name<<endl;
		cout<<"Id :"<<stu_id<<endl;
		cout<<"City :"<<address->city<<endl;
		cout<<"Pin :"<<address->pin<<endl;
		cout<<"State :"<<address->state<<endl;
	
	}
};
		


int main()
{
	Address A1("Ahemdabad", "Gujarat", 362909);
	
	Employee E("Kiran", 45, &A1);
	
	E.displayE();
	
	Address A2("Surat", "Gujarat", 342902);
	
	Student S("Megha", 78, &A2);
	
	S.displayS();
	
	return 0;
}


