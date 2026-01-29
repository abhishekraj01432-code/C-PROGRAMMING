#include<stdio.h>
int main()
{
    int i;
    printf("Enter a number ");
    scanf("%d",&i);
    for(i=1;i<=10;i++)
    {
        if(i==4)
        {
            break;
        }
        printf("%d",i);
    }
    return 0;
}
