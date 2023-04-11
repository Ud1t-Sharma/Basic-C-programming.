#include<stdio.h>
int global = 76;
int sum( int a , int b )
{return a+b;}
int multiplication( int a , int b )
{return a*b;}

int main ()
{
    printf("now being displayed %d\n global is %d", multiplication(100,500), global);
    return 0;   
}