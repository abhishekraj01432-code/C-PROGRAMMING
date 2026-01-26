#include<stdio.h>
int main()
{
    int a[100],i,n,num,j,flag=0;
    printf("Enter the no. of elements you wants to enter :");
    scanf("%d",&n);
    printf("Enter the array element :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements which you want to search :");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            flag=1;
            j=i;
        }
    }
    if(flag==1)
        printf("%d element is found at location %d",num,j);
        else
            printf("Element is not found");
}
