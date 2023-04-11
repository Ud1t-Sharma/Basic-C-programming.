#include<stdio.h>
int main ()
{//equal equal operator"==".
    printf("%d \n", (4==5));

 // greater than or greater than equal to operator ">,>=". 
    printf("%d \n", (4>5));
    printf("%d \n", (4>=5));
    printf("%d \n", (4>4));
    printf("%d \n", (4>=4));

 // smaller than or smaller than equal to operator "<,<=".
    printf("%d \n", (4<5));
    printf("%d \n", (4<=5));
    printf("%d \n", (4<4));
    printf("%d \n", (4<=4));

// Not equal to "!=".
    printf("%d \n", 4!=3);
    printf("%d \n", 4!=4);
// both conditions have to be true "&&"
    printf("%d \n" , (4&&5));
// atleast one condition has to be true "||" OR OPERATOR
int x= 5<0 , y= 6!=0;
    printf("%d \n" , x||y);
    return 0;
}