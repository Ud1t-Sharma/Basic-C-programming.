#include<stdio.h>
int main ()
{
    int A = 10, B = 5;
    printf(" Bitwise operator returned %d\n", A&B);  /*BITWISE AND !! The result of AND is 1 only if both bits are 1.*/

    printf(" Bitwise operator returned %d\n", A^B);  /*BITWISE XOR !! The result of XOR is 1 if the two bits are different.  */
    printf(" Bitwise operator returned %d\n", ~B); //BITWISE NOT !! takes one number and inverts all bits of it. 
    printf(" Bitwise operator returned %d\n", A<<B);//LEFT SHIFT !!takes two numbers, left shifts the bits of the first operand, the second operand decides the number of places to shift. 
    printf(" Bitwise operator returned %d\n", A>>B);//RIGHT SHIFT !! takes two numbers, right shifts the bits of the first operand, the second operand decides the number of places to shift. 
    printf(" Bitwise operator returned %d\n", A|B);//BItWISE OR !! The result of OR is 1 if any of the two bits is 1
    return 0;
}