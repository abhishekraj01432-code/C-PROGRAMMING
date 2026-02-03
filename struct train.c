#include<stdio.h>
#include<string.h>
int main()
{
    struct train
    {
     int train_number;
     char name[50];
     char source[50];
     char destination[50];
    }T[500];
    int i,n;
    char key1[50],key2[50];
    printf("How many trains");
    scanf("%d",&n);
    printf("Enter train_number,name,source,destination");
    for(i=0;i<n;i++)
    {
        scanf("%d%s%s%s",&T[i].train_number,&T[i].name,&T[i].source,&T[i].destination);
    }
    printf("Enter source and destination");
    scanf("%s%s",&key1,&key2);
    for(i=0;i<n;i++)
    {
        if(strcmp(T[i].source,&key1)&&strcmp(T[i].destination,&key2)==0)
        {
            printf("%s",T[i].name);
        }
    }
    return 0;
}
