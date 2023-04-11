#include<stdio.h>
int main()
{
    int a = 7 , b = 5;
    int *a1 ,*a2 ;
    a1 = &a;
    a2 = &b;
    printf("a1 = %u\na2 = %u\n ", a1 ,a2 );
    a = a1 - a2 ;
    printf("a = %u ", a);
    return 0;
}

