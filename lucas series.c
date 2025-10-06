#include<stdio.h>
int main()
{
    int numterms ,next,first=2,second=1;
    printf("Enter the numbers of terms in lucas series :\n");
    scanf("%d",&numterms);
    printf("%d %d ",first,second);
    for(int i=3;i<=numterms;i++)
    {
        next=first+second;
        first=second;
        second=next;
        printf(" %d",next);


    }
    printf(" %d",next);



    return 0;
}
