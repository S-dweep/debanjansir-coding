#include<stdio.h>
struct Emp
{
    char name[1000];
    int sal;
};
int main()
{
    int n,i;
    printf("Enter no. of employees: ");
    scanf("%d",&n);
    struct Emp emp[n];
    for(i=0;i<n;i++)
    {
        printf("Enter name of employee: ");
        scanf("%s",emp[i].name);
        printf("Enter salary of employee: ");
        scanf("%d",&emp[i].sal);
    }
    int h=emp[0].sal;
    int sh=emp[0].sal;
    int j=0;
    for(i=0;i<n;i++)
    {
        if(emp[i].sal>h)
        {
            sh=h;
            h=emp[i].sal;
            j=i;
        }
        else if(emp[i].sal>sh && emp[i].sal<h)
        {
            sh=emp[i].sal;
            j=i;
        }
    }
    printf("2nd highest salary person -\nName: %s\t Salary: %d",emp[j].name,sh);
    return 0;
}