#include<stdio.h>
#include<conio.h>
#include<math.h>
 int main()
 {
     float num1,num2,sub;
     printf("Enter first number:- ");
     scanf("%f", &num1);
     printf("Enter second number:- ");
     scanf("%f",&num2);
     sub = num1 - num2;
     //printf("The value of num1 is %0.3f and for num2 %0.3f \n", num1, num2);(we can use this statement for better output)
     printf("sum of numbers is:- %0.3f" , sub);
     getch();
     return 0;
 }
 