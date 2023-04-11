#include<stdio.h>
int main()
{   
    int i , arr[100] ={0,1,2,3,4,6,5,9,11,12,13,14,15}, n=3;
    for(i=0; i<n ; i++)
    printf("%d\n" , arr[i]);
    printf("6th element is %d", arr[6]);
    return 0;
}