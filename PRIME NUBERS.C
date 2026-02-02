#include<stdio.h>
int main()
{
    int a,b,count;
    for (b=1;b<=100;b++)
    {
        count=0;
        for(a=2;a<=b/2;a++)
        {
            if(b%a==0)
            {
                count++;
                break;
            }
        }
        if(count==0&&b!=1)
        {

            printf(" %d\n",b);
        }
    }
    return 0;
}
