#include<stdio.h>
int main()
{
    double x,y;
    char operate;
    printf("ENTER ANY CHRACTER SIGN :+,-,/,*");
    scanf("%c",&operate);
    printf("Enter two numbers:\n");
    scanf("%lf %lf",&x,&y);

    switch (operate)
    {
    case '+':
        printf("%lf + %lf=%lf\n",x,y,x+y);
        break;
         case '-':
        printf("%lf - %lf=%lf\n",x,y,x-y);
        break;
         case '*':
        printf("%lf * %lf=%lf\n",x,y,x*y);
        break;
         case '/':
        printf("%lf / %lf=%lf\n",x,y,x/y);
        break;

        default :
        printf(" Error in calculator:\n");
    }

    return 0;
}
