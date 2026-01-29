#include<stdio.h>
int main()
{
    int a[100],i,n,max=0;
    printf("Enter the no. of elements you wants to enter :");
    scanf("%d",&n);
    printf("Enter the array element :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("The maximum element is %d",max);
    return 0;

}
