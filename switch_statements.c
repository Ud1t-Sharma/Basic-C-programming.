#include<stdio.h>
int main()
{   int r;
    printf("-----------------------------------------------RESULT OF CSE 1st YEAR-------------------------------------\n");
    printf("Enter your roll number to see your marks :-");
    scanf("%d",&r);
    switch (r) 
    {
        case 1 : printf(" you have scored 40 marks");
                 break;
        case 2 : printf(" you have scored 32 marks");
                 break;
        case 3 : printf(" you have scored 37 marks");
                 break;
        case 4 : printf(" you have scored 28 marks");
                 break;
        case 5 : printf(" you have scored 11 marks");
                 break;
    
        case 6 : printf(" you have scored 15 marks");
                 break;
        case 7 : printf(" you have scored 25 marks");
                 break;
        case 8 : printf(" you have scored 24 marks");
                 break;
        case 9 : printf(" you have scored 35 marks");
                 break;
        case 10 :printf(" you have scored 19 marks");
                 break;
        default: printf("Invalid roll number.");
    }
    return 0;   
}