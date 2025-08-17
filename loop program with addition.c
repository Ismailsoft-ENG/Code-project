#include<stdio.h>
int main()
{
    int a,n=5;
    int i;
    a=0;
    for(i=1;i<=10;i++)
    {

            a=a+n;
        printf("%d * %d =%d\n",n,i,a);
    }
    return 0;
}
