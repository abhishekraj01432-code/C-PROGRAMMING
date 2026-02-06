#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter value of a =");
    scanf("%d",&a);
    printf("Enter value of b =");
    scanf("%d",&b);
    printf("values before swapping of a and b are %d and %d \n",a,b);
    a=a+b;
    b=a-b;
    a=a-b   ;
    printf("values after swapping of a and b are %d and %d",a,b);
    return 0;
}
