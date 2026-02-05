#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter three numbers :");
    scanf("%f%f%f",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            printf("%f is greater",a);
        else
            printf("%f is greater",c);
    }
    else
    {
        if(b>c)
            printf("%f is greater",b);
        else
            printf("%f is greater",c);
    }
    return 0;
}
