
#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {

    struct Employee employees[3];
    int i, maxsalary = 0;


    for (i = 0; i < 3; i++) {
        printf("Enter employee %d details:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }


    for (i = 1; i < 3; i++) {
        if (employees[i].salary > employees[maxsalary].salary) {
            maxsalary = i;
        }
    }


    printf("\nHighest Salary Employee:\n");
    printf("ID: %d\n", employees[maxsalary].id);
    printf("Name: %s\n", employees[maxsalary].name);
    printf("Salary: %.2f\n", employees[maxsalary].salary);
    return 0;
}

