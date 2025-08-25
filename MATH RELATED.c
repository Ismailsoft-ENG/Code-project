#include<stdio.h>
int main()
{
    double a1,a2,b1,b2,c1,c2,x,y;
    printf("solutions with  determinant any Equation : ");
    scanf("%lf%lf%lf%lf%lf%lf",&a1,&a2,&b1,&b2,&c1,&c2);
    x=(b2*c1-b1*c2)/(a1*b2-a2*b1);
    y=(a1*c2-a2*c1)/(a1*b2-a2*b1);

     printf("the value of Equation x :%lf\n",x);
          printf("the value of Equation y :%lf\n",y);



    return 0;
}
