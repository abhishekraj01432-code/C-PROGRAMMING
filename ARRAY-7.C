#include<stdio.h>
int main()
{
    int a[100],i,n,min,pos,j,t;
    printf("how many elements :");
    scanf("%d",&n);
    printf("Enter the elements of array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=a[i];
        pos=i;
        for(j=i+1;j<n-1;j++)
        {
            if(a[j]<min)
            {
                min=a[i];
                pos=j;
            }
        }
        t=a[i];
        a[i]=a[j+1];
        a[j+1]=t;
    }
    printf("The sorted array is ");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }

    return 0;
}
