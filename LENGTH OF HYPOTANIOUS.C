#include<stdio.h>
#include<math.h>
int main()
{
    float B,H,P;
    printf("Enter the value of base and perpendicular =");
    scanf("%f%f",&B,&P);
    H = sqrt((B*B)+(P*P));
    printf("The hypotonious is =%f",H);
    return 0;
}
