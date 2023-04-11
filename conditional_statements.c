#include<stdio.h>
int main ()
{   typedef int i; // typedef gave a new name for integer i.e. "i", (syntax :- typedef Data_type New_name;)
    i marks;
    printf("Enter marks :-");
    scanf("%d/n", &marks);
    if (marks>90)
    {
        printf("You have passed this semester with ALPHA++ grade\n");
    }
    else if(marks > 80 && marks <90 )
    {
        printf("You have passed this semester with ALPHA grade\n");
    }
    else if(marks > 70 && marks <80 )
    {
    printf("You have passed this semester with BETA++ grade\n");
    }
    else if(marks > 60 && marks <70 )
    {
    printf("You have passed this semester with BETA grade\n");
    }
    else if(marks > 50 && marks <60 )
    {
    printf("You have passed this semester with GAMMA grade\n");
    }
    else if(marks > 40 && marks <50 )
    {
    printf("You have passed this semester with bare minimum marks\n");
    }
    else
    {
        printf("you have not passed this semester.\n");
    }
    return 0;
}