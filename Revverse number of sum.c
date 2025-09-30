#include<stdio.h>
#include<ctype.h> // ctype.h is not strictly necessary for this program

int main() {
    int num,rem,sum=0;
    int temp;
    printf("Enter any number:\n");
    scanf("%d",&num);
    temp=num;
    while(temp!=0) {
        rem =temp%10;
        sum=sum+rem;
        temp=temp/10;
    }
    printf("THE SUM OF DIGITS:%d\n",sum); // Corrected line
    return 0;
}
