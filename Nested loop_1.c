#include<stdio.h>
int main()
{
    int row,col;
    int num;
    printf("Enter any  number:\n");
    scanf("%d",&num);
    for(row=1;row<=num;row++)//row er jonno loop
    {

        for(col=1;col<=row;col++)//col er jonno loop
        {

            printf("%d ",col);//col er result print korlam
        }
        printf("\n");
    }

    return 0;
}
