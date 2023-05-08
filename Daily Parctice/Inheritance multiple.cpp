#include<iostream>
using namespace std;
class student
{
    protected:
    	int rno,m1,m2;
    public:
              	void get()
              	{
                            cout<<"Enter the Roll no :";
                            cin>>rno;
                            cout<<"\nEnter the two marks   :";
                            cout<<"\nM1:";
                            cin>>m1;
                            cout<<"\nM2:";
                            cin>>m2;
              	}
};
class sports
{
    protected:
       	int sm;             // sm = Sports mark
    public:
                	void getsm()
	{
                 	        cout<<"\nEnter the sports mark :";
                            cin>>sm;
 
              	}
};   

class statement:public student,public sports
{
    int tot,avg;
    public:
    	void display()
              	{
                 	     tot=(m1+m2+sm);
                 	     avg=tot/3;
                 	     cout<<"\n\n\tRoll No: "<<rno<<"\n\tTotal: "<<tot;
	    				 cout<<"\n\tAverage: "<<avg;
              	}
};
main()
{
 
   statement obj;
   obj.get();
   obj.getsm();
   obj.display();
  
}

