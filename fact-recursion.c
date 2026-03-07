#include<stdio.h>
int fact(int fact);
void main()
{
    int a,n;
    printf("Enter a no. for facctorial :");
    scanf("%d",&n);
    a=fact(n);
    printf("The factorial of a given number is %d",a);
}
int fact(int x)
{
    if(x==0||x==1)
    return 1;
    else return(x*fact(x-1));
}
