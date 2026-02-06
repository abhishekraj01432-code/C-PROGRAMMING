#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value of a =");
    scanf("%d",&a);
    printf("Enter value of b =");
    scanf("%d",&b);
    printf("value before swapping of a and b are %d and %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("valu after swapping of a and b are %d and %d",a,b);
    return 0;
}
