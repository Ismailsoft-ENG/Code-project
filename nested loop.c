#include<stdio.h>
int main ()
{
    int i,n;
    int sum,j;
    sum=0;
    for(n=1;n<=20;n++)
    {
        for(i=1;i<=10;i++)
        {
            for(j=1;j<=i;j++)
            {
                sum=sum+i;
                printf("%d * %d=%d\n ",n,i,sum);
            }


        }
    }





    return 0;
}
