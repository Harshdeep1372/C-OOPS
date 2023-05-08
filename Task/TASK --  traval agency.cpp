//Traval agency management

#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<iostream>
using namespace std;

class destination
{
	public:
	char yes[50];
		
	void display_places()
		{
		cout<<"-------------Welcome to Travel Agency---------------";
		cout<<"\n1.  Ahmedabad";
		cout<<"\n2.  Udaipur";
		cout<<"\n3.  Bikaner";
		cout<<"\n4.  Nagaur";
		cout<<"\n5.  Jodhpur";
		cout<<"\n6.  UK";
		cout<<"\n7.  Rishikash";
		cout<<"\n8.  Mumbai";
		cout<<"\n9.  Surat";
		cout<<"\n10. Banglore";
    	cout<<"\n\n\nEnter yes for registration"<<endl;
		gets(yes);
	
	}
	
	
};
class Registration
{
	public:
	
		char addAnother;
		int a;
		char id[50],pass[50],c_pass[50];
		void enter_details()
		{
	
			do
			{
				cout<<"\n---------------Registration Process-------------------";
				puts("\nEnter username/email-id : ");
				gets(id);	
			
				puts("\nEnter Password : ");
				gets(pass);
			
		
				puts("\nEnter Confirm Password : ");
				gets(c_pass);
			
		    
				a=strcmp(pass,c_pass);			//compare password and confirm password
			
				if(a==0)
				{
					cout<<"\nRegistration Success.";
					break;
				}
				else
				{
					cout<<"\n\nPassword and Confirm password does not matched !!!!!";	
				
				}
				cout<<"\n\n Press IF Yes Reenter the password....";
				addAnother = getch();	//hold the screen
			}while(addAnother=='y'|| addAnother=='Y');
		}
	
	
};
class Login : public Registration
{
	public:
		char name[50],password[50];
		void login_details()
		{
			puts("\n\nEnter email/user_name : ");
			gets(name);
			puts("\n\nEnter password : ");
			gets(password);
			
			
			if(strcmp(name,id)==0 && strcmp(password,pass)==0)
			{
				cout<<"\n\nLogin Success .";
				
			}
			else
			{
				cout<<"\n\nLogin Denied";	
				
			}	
			
		}
};
int main()
{
	char ip[20] ="yes";

	destination d1;             // Create object
	Login l1;	
	d1.display_places();
	if (strcmp(d1.yes,ip)==0)
	{
		l1.enter_details();
		l1.login_details();
	}
	else
	{
		cout<<"\nThank you";
	}
	

	
	return 0;
}
