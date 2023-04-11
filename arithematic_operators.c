#include<stdio.h>
int main ()
{
    int a , b;66
    
    printf(" ENTER VALUE OF A :-");
    scanf("%d", &a);
    printf(" ENTER VALUE OF B :-");
    scanf("%d", &b);
    printf("addition ! %d\n", a+b);
    printf("subtraction ! %d\n", a-b);
    printf("multiplication ! %d\n", a*b);
    printf("division ! %f\n", a/b);
    printf("MODULO ! %d\n", a%b);
    printf("preincrement of b ! %d\n", ++b);
    printf("preincrement of a ! %d\n", ++a);
    printf("postincrement of b ! %d\n", b++);
    printf("%d\n b is :- " , b);
    printf("postincrement of a ! %d\n", a++);
    printf("predecrement of a ! %d\n", --a);//new value of a became 6 due to preincrement 
    printf("predecrement of b ! %d\n", --b);// new value of b became 6 due to pre increment 
    return 0;
}