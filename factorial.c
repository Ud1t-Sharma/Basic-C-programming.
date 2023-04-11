#include <stdio.h>
int main()
{
   int number , count , factorial =1;
   printf("Enter the integer for findinng its factorial :-");
   scanf("%d",&number);
   for(count=1;count<=number;count++)
   {
      factorial=factorial*count;
   }
   printf("factorial of %d is %d", number,factorial);
   return 0;
}