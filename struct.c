#include<stdio.h>
struct MENU
{
    int no;
    char CATEGORY[100];
    char DISH[100];
    int PRICE;
}M1 , M2 ,M3, M4;
 int main ()
{
    struct MENU ;
    printf("ENETR S_NO. :-");
    scanf("%d",&M1.no);
    printf("ENTER A CATEGORY :- ");
    scanf("%s", &M2.CATEGORY);
    printf("ENTER A DISH :- ");
    scanf("%s", &M3.DISH);
    printf("ENTER PRICE :- ");
    scanf("%u", &M4.PRICE);
    printf(" %d , %s , %s , %u", M1.no ,M2.CATEGORY,M3.DISH,M4.PRICE);
    return 0;
}