#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("the number is Even number");
    }

    else if (num%2==!0)
    {
        printf("the number is ODD Number");
    }

    else
    {
        printf(" the result is zero");
    }


    return 0;
}
