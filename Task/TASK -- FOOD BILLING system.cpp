// resturent bill payment method
#include<iostream>
#include<conio.h>
using namespace std;
char print_data();
int Pizza();
int Burgur();
int Pani_Puri();
int Dhosa(); 

main()
{
	char addAnother;
	int Final_amount, totalamount;
	do
	{
	
	cout<<"\n************WELCOME TO RESTAURANT**************"<<endl;
	cout<<"Srno."<<"  Item"<<"      Price"<<endl;
	cout<<"1."<<"     Pizza"<<"      100/-"<<endl;
	cout<<"2."<<"     Burgur"<<"     89/-"<<endl;
	cout<<"3."<<"     Pani_Puri"<<"  20/-"<<endl;
	cout<<"4."<<"     Dhosa"<<"      80 /-"<<endl;
	
	int i;

	cout<<"\nEnter your choice : ";
	cin>>i;

	
	switch(i) //for selective type condition
	{ 
	int q;
		case 1:
			q=Pizza();
			totalamount= 100*q;			
			cout<<"total amount :"<<totalamount;
			break;
		case 2:
			q=Burgur();
			totalamount= 89*q;			
			cout<<"total amount :"<<totalamount;
			break;
		case 3:	
			q=Pani_Puri();
			totalamount= 20*q;			
			cout<<"total amount :"<<totalamount;
			break;
		case 4:	
			q=Dhosa();
			totalamount= 80*q;			
			cout<<"total amount :"<<totalamount;
			break;	
			
		default:
			cout<<"You Entered Invalid Number";	
		
	}
	
		
cout<<"\n\nDo You Want to Place More Order ? Yes or No : "<<endl;
addAnother = getch();
Final_amount+=totalamount; // final amount formula
}
while(addAnother == 'y'|| addAnother == 'Y' );	

	cout<<"\n\nFinal Amount : "<<Final_amount;
}

int Pizza() // function of food for user get value
{
	int qty;
	cout<<"Your Item : Pizza"<<endl<<"Enter Quantity : ";
	cin>>qty;
	
	return qty;
}

int Burgur(){
	int qty;
	cout<<"Your Item : Burgur"<<endl<<"Enter Quantity : ";
	cin>>qty;
	return qty;
}

int Pani_Puri(){
	int qty;
	cout<<"Your Item : Pani_Puri"<<endl<<"Enter Quantity : ";
	cin>>qty;
	return qty;
}
int Dhosa(){
	int qty;
	cout<<"Your Item : Dhosa"<<endl<<"Enter Quantity : ";
	cin>>qty;
	return qty;
}
