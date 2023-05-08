#include<iostream>
using namespace std;

class area
{
 public:
 	 float h;
     float b;
     float area;
    
    void read( )
          {
                 cout<<" Enter hight :: ";
                 cin>>h ;
                 cout<<"\n Enter base :: ";
                 cin>>b;

				 area= (h*b)/2;

          }

    void show( )
         {
                cout<<"\n Entered Details are :: \n";
                cout<<"\n hight: "<<h;
                cout<<"\n\n base: "<<b;
               
                cout<<"\n\n Area of Triangle : "<<area<<"\n";
         }
};


int main ()
{
    area a ;

    a.read ( );
    a.show ( );

    cout<<"\n";
    system("pause");
}
