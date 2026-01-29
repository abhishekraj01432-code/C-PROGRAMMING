#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,gdistance,d;
    // for first quardinent
    printf("Enter the value of x1, x2 =");
    scanf("%f%f",&x1,&x2);
    // for second quardinent
    printf("Enter the value of y1, y2 =");
    scanf("%f%f",&y1,&y2);
    gdistance = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    d = sqrt(gdistance);
    printf("The distance of two points is = %f",d);
    return 0;
}
