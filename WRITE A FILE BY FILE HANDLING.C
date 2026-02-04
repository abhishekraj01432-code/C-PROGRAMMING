#include<stdio.h>
#include<process.h>
int main()
{
    FILE*fp;
    char t;
    fp = fopen("a.txt","w");
    if(fp==NULL)
    {
        printf("file can not open");
        exit(0);
    }
    printf("Enter text and $ for termination");
    while(1)
    {
        scanf("%c",&t);
        if(t=='$')
            break;
        fputc(t,fp);
    }
    fclose(fp);

    return 0;
}
