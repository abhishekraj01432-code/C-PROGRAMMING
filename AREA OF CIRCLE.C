#include<stdio.h>
int main()
{
    float r,area;
    float pi=3.14;
    printf("Enter the radius of circle");
    scanf("%f",&r);
    area = pi*r*r;
    printf("The area of circle is =%f",area);
    return 0;
}