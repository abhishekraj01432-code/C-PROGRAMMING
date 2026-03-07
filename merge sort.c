#include <stdio.h>
void Array(int arr1[], int n1, int arr2[], int n2, int c[])
{
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            c[k++] = arr1[i++];
        }
        else
        {
            c[k++] = arr2[j++];
        }
    }
    while (i < n1)
    {
        c[k++] = arr1[i++];
    }
    while (j < n2)
    {
        c[k++] = arr2[j++];
    }
}
int main()
{
    int arr1[] = {1,3, 8, 9, 11, 12};
    int arr2[] = {2, 4, 6, 7, 10, 13, 15};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int c[n1 + n2];
    Array(arr1, n1, arr2, n2, c);
    printf("Merged sorted array:\n");
    for (int i = 0; i < n1 + n2; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n");
    return 0;
}