#include<stdio.h>
#include<string.h>
void main()
{
	char name[10],n;
	int i, j, k, count=0,repeat=0;
	
	printf("Enter the name :");
	scanf("%s",name[10]);
	
	 for(i=0 ; name[i] ;i++)
	 {
	 	
		n=name[i];
		 
		for(j=0 ;i<n;j++)
		 	{
		 	 	if (name[k]==name[i])
		 	 	{
		 	 		count++;
		 	 		name[j]='\0';
		 		}
			}
		 
		 
	}
}
