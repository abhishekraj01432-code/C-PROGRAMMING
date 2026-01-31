#include<stdio.h>
int main()
{
    int a[50][50],i,j,max,m,n;
    printf("Enter the row and column of a matrix :");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of a matrix A");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    max=a[0][0];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]>max)
                max= a[i][j];
        }
    }
    printf("The maximum element in matrix is %d",max);
    return 0;
}
