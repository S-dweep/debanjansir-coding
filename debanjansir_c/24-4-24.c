#include<stdio.h>
struct employee
{
    char name[20];
    int sal;
};

void main()
{
    struct employee e[100];
    int n, i;
    
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        printf("Enter the name of employee %d: ", i + 1);
        scanf("%s", e[i].name);
        printf("Enter the salary of employee %d: ", i + 1);
        scanf("%d", &e[i].sal);
    }
    
    printf("\nName \t Salary\n");
    for(i = 0; i < n; i++)
    {
        printf("%s \t %d\n", e[i].name, e[i].sal);
    }
    
    int max = e[0].sal;
    int smax = e[0].sal;
    int j = 0;
    
    for(i = 0; i < n; i++)
    {
        if(e[i].sal > max)
        {
            smax = max;
            max = e[i].sal;
            j = i;
        }
        else if(e[i].sal > smax && e[i].sal < max)
        {
            smax = e[i].sal;
            j = i;
        }
    }
    
    printf("The 2nd highest paid Employee is: %s and his salary is: %d\n", e[j].name, smax);
}