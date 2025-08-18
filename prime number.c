#include <stdio.h>
#include <math.h>
int main ()
{
    int  i,num,count=0;
    printf("enter the any number:");
    scanf ("%d",&num);
    if (num<=1)
    {
        count =1;
    }
    else
    {


    for (i=2;i<=sqrt(num);i++)
    {
        if (num%i==0)
        {
            count=1;
            break;
        }
    }
    }
        if (count==0)
        {
           printf ("%d is prime number:\n",num);
        }
        else
        {
            printf ("%d is not prime number:\n" ,num);
        }

getchar ();
}
