#include<stdio.h>

int main()
{
	 int num1, num2;
	 printf("Enter two numbers:\n");
	 scanf("%d%d",&num1, &num2);
	 if(num1>num2)
	 {
	  printf("%d is greater than %d\n", num1 , num2);
	     if(num2>num1)
	    {
	       	printf("%d is grater than %d", num2 , num1);	
	    } 
	    
	    else
	    {
		  printf("%d is smaller than %d", num2 , num1);
        }
	 } 
	  
    
	   else
	  { 
		printf("%d is smaller than %d", num1 , num2);
	  }
	
	 return 0;
}