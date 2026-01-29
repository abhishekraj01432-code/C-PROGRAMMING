#include<stdio.h>
int main()
{
    int a[100],i,n;

    printf("How many element u want to enter :");
    scanf("%d",&n);
    printf("Enter the element of array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array elements are here :");
    for(i=0;i<n;i++)
        {
            printf("%d",a[i]);
        }
    return 0;
}
