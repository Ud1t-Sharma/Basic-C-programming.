#include<stdio.h>
int main()
{
int a,b,c;
for (a=1;a<=10;a++)
    { 
    for(b=10;b>a;b--)
      {printf(" ");}
    for(c=1;c<=b;c++);
      {printf(" $");}
       printf("\n");
       return 0;
    }
}    