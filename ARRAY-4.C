#include<stdio.h>
int main()
{
    int a[100],i,n,num,first ,last,mid;
    printf("Enter the no. of elements you wants to enter :");
    scanf("%d",&n);
    printf("Enter the array elements in increasing order :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element you want to search :");
    scanf("%d",&num);
    first=0;
    last=n-1;
    mid=(first+last)/2;
    while(first<=last)
    {
        if(a[mid]==num)

            break;
            else if(a[mid]>num)
                 last=mid-1;

        else


            first=mid+1;
        mid=(first+last)/2;

    }
    if(first>last)
        printf("Element not found");
    else
        printf("%d element is found at location %d",num,mid+1);
    return 0;
}

