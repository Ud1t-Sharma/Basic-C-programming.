#include<stdio.h>
int main ()
{
    int i,n, t1 = 0 , t2 = 1 , NextTerm = t1 + t2 ;
    printf("Enter the number of teerms:- ");
    scanf("%d",&n);
    printf("fibonacci series: %d %d", t1 , t2);
    for (i=3;i<=n;i++)
    {
        printf("%d",NextTerm);
        t1=t2;
        t2=NextTerm;
        NextTerm = t1 + t2 ;
    }
    return 0;
}