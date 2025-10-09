#include<stdio.h>
int main()
{
    int row,col;
    int num;
    printf("Enter Number:\n");
    scanf("%d",&num);
    int rem;

    for(row=1;row<=num;row++)
    {

        for(col=1;col<=row;col++)
        {
                rem=col%2;

            if(rem==0)
            {

                printf("%d ",rem);
            }
            else{
                printf("%d ",rem);
            }
        }
        printf("\n");
    }

    return 0;
}
