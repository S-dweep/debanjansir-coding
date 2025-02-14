#include<stdio.h>
#define MAX 100

int f=-1,r=-1,queue[MAX];

void insertion()
{
    int val;
    if((f==0 && r==MAX-1) || f==r+1)
        printf("Overflow.\n");
    else
    {
        printf("Enter element to push: ");
        scanf("%d",&val);
        if(f==-1)
            f=r=0;
        else if(f!=0 && r==MAX-1)
            r=0;
        else
            r=r+1;
        queue[r]=val;
    }
}

void deletion()
{
    if(f==-1)
        printf("Underflow.\n");
    else
    {
        printf("Deleted element: %d\n",queue[f]);
        if(f==r)
            f=r=-1;
        else if(f==MAX-1)
            f=0;
        else
            f=f+1;
    }
}

void display()
{
    int i;
    if(f==-1)
        printf("Underflow.\n");
    else
    {
        printf("Queue:\n");
        if(f<=r)
        {
            for(i=f; i<=r; i++)
            {
                printf("%d\n",queue[i]);
            }
        }
        else
        {
            for(i=f; i<MAX; i++)
            {
                printf("%d\n",queue[i]);
            }
            for(i=0; i<=r; i++)
            {
                printf("%d\n",queue[i]);
            }
        }
    }
}

void main()
{
    int ch;
    while(1)
    {
        printf("**********************\n");
        printf("***Queue Operations***\n");
        printf("Press 1.Insert\nPress 2.Delete\nPress 3.Display\nPress 4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            insertion();
            break;
        case 2:
            deletion();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid Choice!!\n");
        }
    }
    return 0;
}

