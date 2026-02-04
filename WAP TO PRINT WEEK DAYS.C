    #include<stdio.h>
    int main()
    {
        int wd;
        printf("Enter the  value of week days : ");
        scanf("%d",&wd);
        if(wd==1)
            printf("MONDAY");
        else if(wd==2)
            printf("TUESDAY");
        else if(wd==3)
            printf("WEDNESDAY");
        else if(wd==4)
            printf("THURSDAY");
        else if(wd==5)
            printf("FRIDAY");
        else if(wd==6)
            printf("SATURDAY");
        else if(wd==7)
            printf("SUNDAY");
        else
            printf("Please enter 1 to 7 numbers only");
        return 0;
    }
