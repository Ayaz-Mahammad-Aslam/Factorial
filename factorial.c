/*write a program to print factorial of given number without using recursion*/
#include<stdio.h>
int main()
/* the factorial of a number 
is the product of the number 
with all positive integers less than that number 
eg: factorial of 5: 5!(! denotes factorial) = 5*4*3*2*1 = 120  */
{
    int i, fact = 1,number;
    printf("Enter a number: \n");
    scanf("%d",&number);
    for(i=1; i<=number; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d is: %d",number,fact);
    return 0;
}