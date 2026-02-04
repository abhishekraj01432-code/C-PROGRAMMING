#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks of student in percentage :");
    scanf("%d",&marks);
    if(marks>=90)
        printf("A");
    else if(marks>=80&&marks<90)
        printf("B");
    else if(marks>=65&&marks<80)
        printf("C");
    else if(marks>=45&&marks<65)
        printf("D");
    else if(marks>=30&&marks<45)
        printf("E");
    else
        printf("F, You are Fail. ");
    return 0;
}
