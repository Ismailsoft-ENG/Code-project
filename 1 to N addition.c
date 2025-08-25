#include<stdio.h>
int main()
{
    int i;
    int n;
    int sum;
    sum=0;
    printf(" 1 to n porjonto addition print:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("the total sum 1 to N :%d\n",sum);






    return 0;
}
