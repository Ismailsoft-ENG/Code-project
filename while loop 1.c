#include<stdio.h>
int main ()
{
    int n;
    printf("Enter any number :");
    scanf("%d",&n);
    while (n<=100)
    {
        printf("%d\n",n);
        n++;

    if(n>10)
    {
        continue;
    }
        }
    return 0;
}
