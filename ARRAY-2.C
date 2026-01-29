#include<stdio.h>
int main()
{
    int a[100],i,n,sum=0;
    float avg;
    printf("How many element u want to enter :");
    scanf("%d",&n);
    printf("Enter the element of array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array elements are here :\n");
    for(i=0;i<n;i++)
        sum=sum+a[i];
    avg=sum/n;
    printf("The avg of the element of array  is %f",avg);

    return 0;
}

