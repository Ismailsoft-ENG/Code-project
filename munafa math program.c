#include<stdio.h>
int main()
{
    double loanamount ,totalamount,interestrate,monthlyamount,numberofyears;
    printf("Enter the loanamount:\n");
    scanf("%lf",&loanamount);
    printf("Enter the interestrate:\n");
    scanf("%lf",&interestrate);
    printf("Number of years:\n");
    scanf("%lf",&numberofyears);
    totalamount= loanamount+(loanamount*interestrate)/100.00;
    monthlyamount=totalamount/(numberofyears*12);

    printf("Total amount is :%.2lf\n ",totalamount);
    printf("Monthly amount is:%.2lf\n",monthlyamount);

    return 0;
}
