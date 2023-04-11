#include<stdio.h>
int main()
{   int a,b;
    printf("Enter the value of point A :- " );
    scanf("%d",&a);
    printf("Enter the value of point B :-" );
    scanf("%d",&b);
    a<0 && b<0? printf(" A and B lie in third Quadrant."):printf("%d , %d " , a ,b );
    if (a==0 && b==0)
    {
        printf("lie on origin.");
    }
    else if (a>0 && b>0)
    {
            printf("lie in first quadrant.");
    }
    else if (a>0 && b<0)
    {
        printf(" Lie in fourth quadrant.");
    }
    else if (a<0 && b>0)
    {
        printf("Lie in second quadrant.");
    }   
    return 0;
}