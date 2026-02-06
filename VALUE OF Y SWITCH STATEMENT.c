#include<stdio.h>
#include<math.h>
void main()
{
    int n,x,a,b,y;

    printf("Expression solving");
    printf("\npress 1 for exp.1,press 2 for exp.2,press 3 for exp.3,press 4 for exp.4");
    printf("please  enter your choice");
    scanf("%d",&n);
    printf("\nEnter the value of a");
    scanf("%d",&a);
    printf("\nEnter the value of b");
    scanf("%d",&b);
    printf("\nEnter the value of x");
    scanf("%d",&x);
    switch(n)
    {
    case 1:
        y=(a*x)%b;
        printf("the value of y is %f",y);
        break;
    case 2:
        y=a*pow(x,2)+pow(b,2);
        printf("the value of y is  %f",y);
        break;
    case 3:
        y=a-b*x;
        printf("the value of y is %f",y);
        break;
    case 4:
        y=a+(x)/b;
        printf("the value of y is %f",y);
        break;
    default:
        printf("wrong choice pls enter 1 to 4 choice");
    }

}

