#include<stdio.h>
int main()
{
    int l,b,p,a;
    printf("Enter the length of rectangle =");
    scanf("%d",&l);
    printf("Enter the breath of rectangle =");
    scanf("%d",&b);
    a =l*b;
    p =2*(l+b);
    printf("The area of rectangle is =%d",a);
    printf("\nThe perimeter of rectangle is =%d",p);
    return 0;
}