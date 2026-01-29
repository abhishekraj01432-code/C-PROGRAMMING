#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,i,n,max;
    printf("How many elements :");
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    printf("Enter the elements in list :");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    max=*p;
    for(i=1;i<n;i++)
    {
        if(*(p+i)>max)
            max=*(p+i);

    }
    printf("The max. element is %d",max);
    free(p);
    return 0;
}
