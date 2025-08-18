#include<stdio.h>
int main()
{
    double a,b,sum;
    scanf("%lf%lf",&a,&b);
    sum=a+b;
    printf("the sum is :%lf + %lf =%lf\n",sum);
     printf("the sum is :%lf + %lf =%.2lf\n",sum);
      printf("the sum is :%lf + %lf =%.3lf\n",sum);
        printf("the sum is: %lf + %lf =%.4lf\n",sum);
         printf("the sum is: %lf + %lf =%.5lf\n",sum);

    return 0;
}
