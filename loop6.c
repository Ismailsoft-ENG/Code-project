#include<stdio.h>
int main ()
{
    int num,remainder;
    printf("Enter any number:");
    scanf("%d",&num);
    remainder =num%2;
    if(remainder ==0)
    {
        printf("the number is even number :");
    }
    else {
        printf("the number  is odd number:");
    }
    return 0;
}
