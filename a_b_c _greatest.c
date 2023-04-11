#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first number :-");
    scanf("%d", &a);
    printf("Enter second number :-");
    scanf("%d", &b);
    printf("Enter third number :-");
    scanf("%d", &c);
    a>b && b<a && a>c ? printf(" %d is the greatest number from %d , %d ,%d . ", a ,a ,b, c):printf("");
    b>a && c<b&& b>a ? printf(" %d is the greatest number from %d , %d ,%d . ", b ,a ,b, c):printf("");
    c>a && a<c && c>b ? printf(" %d is the greatest number from %d , %d ,%d . ", c ,a ,b, c):printf("");
    return 0;

}