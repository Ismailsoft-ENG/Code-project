#include<stdio.h>
int main()
{
    int n,i,j,sum;
    printf("Enter any number for print Namata:\n");
    scanf("%d",&n);
    for(i=n;i<=n;i++)
    {
        printf("\n %d of Namata\n",i);
        sum=0;
        for (j=1;j<=10;j++)
        {
            sum=sum+i;
            printf(" %d * %d =%d\n",i,j,sum);
        }
    }

    return 0;
}

