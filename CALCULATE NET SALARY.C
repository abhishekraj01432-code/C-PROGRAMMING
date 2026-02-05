#include<stdio.h>
int main()
{
    float BS,DA,HRA,GS,PF,NS;
    printf("The Basic salary of Employee is =");
    scanf("%f",&BS);
    DA = (BS)/100*25;
    HRA = (BS)/100*15;
    GS = (BS+DA+HRA);
    PF = (GS)/100*10;
    NS = GS-PF;
    printf("Your Net salary is =%f",NS);
    return 0;

}
