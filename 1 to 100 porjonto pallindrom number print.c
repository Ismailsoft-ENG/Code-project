#include<stdio.h>
int main()
{
    int num,rem,temp,sum;
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    for(num=1;num<=n;num++)
    {

    sum=0;
    temp=num;

    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;

    }

    if (num == sum)
    {

        printf("%d is a pallindrom number\n",num);
    }
    else
    {

        printf("%d is not a pallindrome number\n",num);
    }
    }



    return 0;
}
