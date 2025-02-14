#include<stdio.h>
void main()
{
    struct student
    {
        char name[1000];
        int marks;
    };
    int n,i;
    printf("Enter no. of students: ");
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++)
    {
        printf("Enter name and marks of students: \n");
        scanf("%s %d",&s[i].name,&s[i].marks);
    }
    int l=s[0].marks,c;
    for(i=0;i<n;i++)
    {
        if(s[i].marks>l)
        {
            l=s[i].marks;
            c=i;
        }
    }
    printf("Student with highest marks: %s %d",s[c].name,l);
}

