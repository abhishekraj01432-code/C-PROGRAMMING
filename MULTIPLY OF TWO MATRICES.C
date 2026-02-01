#include<stdio.h>
int main()
{
    int a[50][50],b[50][50],c[50][50],m,n,i,j,k;
    printf("Enter the size row and column :");
    scanf("%d%d",&m,&n);
    printf("Enter the element in matrix A");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the element of matrix B");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("The multiplication of two matrix are :");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
            printf("%d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
