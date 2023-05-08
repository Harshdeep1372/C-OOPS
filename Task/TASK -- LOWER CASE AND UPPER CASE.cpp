//LOWER CASE AND UPPER CASE PROGRAM IN C++
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main()
{
    int i;
    int upper=0,lower=0;//variable declaration
    char ch[100];//array declaration

    cout<<"Enter the String:\n";
    gets(ch);

    for(i=0; ch[i]!=0; i++){

if(ch[i]>='A' && ch[i]<='Z'){
    upper++;
}
else if(ch[i]>='a' && ch[i]<='z'){
    lower++;
}
    }
cout<<"lowercase letters:" <<lower;
cout<<"\nuppercase letters:"<<upper;
getch();
    return 0;
}
