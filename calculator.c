#include<stdio.h>
int main()
{  printf("---------------------------------------MENU FOR OPERATIONS-------------------------------------\n");   
   printf("FOR ADDITION PRESS 1\n");
   printf("FOR SUBTRACTION PRESS 2\n");
   printf("FOR MULTIPLICATION PRESS 3\n");
   printf("FOR DIVISION PRESS 4\n");
   printf("FOR PERCENTAGE PRESS 5\n");
   printf("---------------------------------------------END of MENU---------------------------------------\n");
   printf("Press the designated number for desired operation :-");
 
  int a,b;
  scanf("%d", &a);
  if (a == 1)
  {
   printf("enter two numbers for addition:-\n");
   scanf("%d \n %d",&a,&b);
   printf("Sum of  given numbers is %d.",a + b);
  }
  else if(a == 2)
  {
   printf("enter two numbers for subtraction:-\n");
   scanf("%d \n %d",&a,&b);
   printf("Sum of given numbers is %d.",a - b);
  }
  else if(a==3)
  {
   printf("enter two numbers for multiplication:-\n");
   scanf("%d \n %d",&a,&b);
   printf("Product of given numbers is %d.",a * b);
  }
  else if(a==4)
  {
   printf("enter two numbers for division:-\n");
   scanf("%d \n %d",&a,&b);
   printf("Divinging %d with %d gives %d.", a, b ,a / b);
  }
  else if(a==5)
  {
   printf("enter obtained value:-\n");
   printf("enter total value:-\n");
   scanf("%d \n %d",&a,&b);
   printf("Percentage is %d.",(100)*a/b);
  }
  else 
  {
   printf("Press any designated integer.");
  }
   return 0;
}