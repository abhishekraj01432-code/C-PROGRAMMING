#include<stdio.h>
int main()
{
    int f1=0,f2=1,f3,n,i;
    printf("Enter the no of term of fibonacci series :");
    scanf("%d",&n);
    printf("The fibonacci series is %d\n%d",f1,f2);
    for (i=2;i<=n-2;i++)
    {
        f3=f1+f2;
        printf("%d",f3);
        f1=f2;
        f2=f3;
    }
    return 0;
}
