#include<stdio.h>
#include<math.h>
int main()
{
    int a,ratio,nterms,sum;
    printf("Enter the first term of the geometric series:-");
    scanf("%d",&a);
    printf("Enter the number of terms:-");
    scanf("%d", &nterms);
    printf("Enter the common ratio of the geometric series");
    scanf("%d", &ratio);
    sum= (a*pow(ratio,nterms)-a)/(ratio-1);
    printf("The sum of our geometric series is%d",sum);
    return 0;
}