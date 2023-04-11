#include<stdio.h>
int main()
{
 int n;
 printf("Enter the number :-");
 scanf("%d", &n);
 n%2==0?printf("This is an even number"):printf("This is an odd number");
 return 0;
}