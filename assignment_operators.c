// a+=b :- a= a+b and similary for rest of the assignment operators.
/** value of a and b changes for every operator for example value of a = 5 and b = 6, then value of a in a-=b operator will be 11 because previous command changed vale of a (a = 5+6, therfoe a = 11)*/
#include<stdio.h>
int main()
{
 int a,b;
 printf("Enter first integer :-");
 scanf("%d", &a);
 printf("Enter first integer :-");
 scanf("%d", &b);
 a += b;
 printf("%d\n",a);
 a -= b;
 printf("%d\n",a);
 a *= b;
 printf("%d\n",a);
 a /= b;
 printf("%d\n",a);
 a %= b;              
 printf("%d\n",a);
 return 0;
}