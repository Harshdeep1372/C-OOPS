#include <stdio.h>
#include <string.h>
 
main()
{
    char name[10];  
    int  i,j,k,count=0,n;
 
    printf("Enter  the string : ");
    gets(name);
     
    for(j=0;name[j];j++);
	 n=j; 
    
	printf(" frequency count character in string:\n");
 
    for(i=0;i<n;i++)  
    {
     	count=1;
    	if(name[i])
    	{
		
 		  for(j=i+1;j<n;j++)  
	      {   
	    	
	        if(name[i]==name[j])
    	    {
                 count++;
                 name[j]='\0';
	     	}
	      }  
	      printf(" '%c' = %d \n",name[i],count);
 
	       
	   
       }
	   
	   
 	} 
 	 
     
    
}
