#include<stdio.h>
int main ()
{// area of square
    int side , product;
    printf("Enter the side of square :-");
    scanf("%d", &side);
    product = side*side;
    printf("Area of the square is :- %d \n", product);
    
   //area of circle
    float radius , circle;
    printf("Enter the radius of circle :-");
    scanf("%f", &radius);
    circle = 3.14*radius*radius;
    printf("Area of circle is :- %0.3f \n ", circle);

    return 0;

}