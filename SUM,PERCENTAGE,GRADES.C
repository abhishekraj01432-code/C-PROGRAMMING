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
    printf("\nThe total marks of student is =%f",sum);
    per =(p+c+m+e+h)/500*100;
    printf("\nThe percentage gain by student is =%f",per);
    if(per>=90&&per<=100)
        printf("\nGrade-A");
    else if(per>=80&&per<90)
        printf("\nGrade-B");
    else if(per>=60&&per<80)
        printf("\Grade-C");
    else
        printf("\nGrade-D");
    return 0;
}



