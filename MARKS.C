#include<stdio.h>
int main()
{
    float p,c,m,e,h,sum,per;
    printf("Marks obtained in physics =");
    scanf("%f",&p);
    printf("Marks obtained in chemistry =");
    scanf("%f",&c);
    printf("Marks obtained in maths =");
    scanf("%f",&m);
    printf("Marks obtained in english =");
    scanf("%f",&e);
    printf("Marks obtained in hindi =");
    scanf("%f",&h);
    sum = p+c+m+e+h;
    printf("The total marks of student is =%f",sum);
    per =(p+c+m+e+h)/500*100;
    printf("\nThe percentage gain by student is =%f",per);
    return 0;
}
