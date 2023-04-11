#include<stdio.h>
#include<conio.h>
int main()
{
    char line[100];
    int i;
    printf("Enter an array of characters:-");
    gets (line);
    for(i=0;line[i]!='\0';i++);
    printf("Length of string is :-%d",i);
    return 0;
}