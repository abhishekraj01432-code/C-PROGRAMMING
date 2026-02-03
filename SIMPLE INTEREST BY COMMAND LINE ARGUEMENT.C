#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[])
{
    int p,r,t,SI;
    p=atoi(argv[1]);
    r=atoi(argv[2]);
    t=atoi(argv[3]);
    SI = (p*r*t)/100;
    printf("The simple interest is %d : ",SI);
return 0;
}
