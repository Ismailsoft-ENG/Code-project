#include<stdio.h>
int main()
{
    int fact;
    int i;
    int n;
    printf(" Enter any number :");
    scanf("%d",&n);
    fact=1;
    for(i=1;i<=n;i++)
    {
      fact=fact*i;
    }
    printf("the factorial of number is :%d\n",fact);

   return 0;
}
