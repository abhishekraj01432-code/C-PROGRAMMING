#include<stdio.h>
int main()
{
    int choice;
    float a,b,c;
    printf("         SIMPLE CALCULATOR       ");
    printf("\npress 1 for addition,press 2 for subtraction,press 3 for division,press 4 for multiplication");
    printf("\nEnter your choice");
    scanf("%d",&choice);
    printf("Enter first number");
    scanf("%f",&a);
    printf("Enter second number");
    scanf("%f",&b);
    switch(choice)
    {
    case 1:
        c=a+b;
        printf("The sum of two number is %f",c);
        break;
    case 2:
        c=a-b;
        printf("The subtraction of two number is %f",c);
        break;
    case 3:
        c=a/b;
        printf("The division of two number is %f",c);
        break;
    case 4:
        c=a*b;
        printf("The multiplication of two number is %f",c);
        break;
    default:
        printf("wrong choice , please enter 1 to 4 numbers only");
        return 0;

    }
}
