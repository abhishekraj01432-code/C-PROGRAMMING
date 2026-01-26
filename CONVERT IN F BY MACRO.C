#include<stdio.h>
#define  TEMP(C)  (9*C)/5+32
int main()
{
    float F,C;
    printf("Enter temprature in C :");
    scanf("%f",&C);
    F = TEMP(C);
    printf("The temprature in F is %f :",F);
    return 0;
}
