#include<stdio.h>
int main()
{
    int a[100],i,j,n,temp;
    printf("How many elements :");
    scanf("%d",&n);
    printf("Enter the array elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n-1;i++)
    {
        j=i;
        while(j>0&&a[j-1]>a[j])
        {
            temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
        }
    }
    printf("sorted list in ascending order is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
