#include<stdio.h>
#include<conio.h>
 int main()
 {
     float num1,num2,sum;
     printf("Enter first number:- ");
     scanf("%f", &num1);
     printf("Enter second number:- ");
     scanf("%f",&num2);
     printf("The value of num1 is %0.3f and for num2 %0.3f \n", num1, num2);
     sum = num1 + num2;
     printf("sum of numbers is:- %0.3f" , sum);
     getch();
     return 0;
 }

// ----------------------------same program but for decimal values ------------------------------------------
// #include<stdio.h>
// #include<conio.h>
//  int main()
//  {
//      int num1,num2,sum;
//      printf("Enter first number:- ");
//      scanf("%d", &num1);
//      printf("Enter second number:- ");
//      scanf("%d",&num2);
//      printf("The value of num1 is %d and for num2 %d \n", num1, num2);
//      sum = num1 + num2;
//      printf("sum of numbers is:- %d" , sum);
//      getch();
//      return 0;
//  }