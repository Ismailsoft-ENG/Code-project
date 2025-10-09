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

            printf("%d ",row);//col er result print korla
        }
        printf("\n");
    }

    return 0;
}
