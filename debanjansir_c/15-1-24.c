#include<stdio.h>
#define MAX 100

int f=-1,r=-1,queue[MAX];

void enqueue()
{
    int val;
    if(r==MAX-1)
        printf("Queue Overflow.\n");
    else
    {
        printf("Enter element to enqueue: ");
        scanf("%d",&val);
        if(f==-1 || f>r)
            f=r=0;
        else
            r++;
        queue[r]=val;
    }
}

void dequeue()
{
    if(f==-1 || f>r)
        printf("Queue Underflow.\n");
    else
    {
        printf("Dequeued element: %d\n",queue[f]);
        f++;
    }
}

void peek()
{
    if(f==-1 || f>r)
        printf("Queue Underflow.\n");
    else
    {
        printf("Queue front: %d\n",queue[f]);
    }
}

void display()
{
    int i;
    if(f==-1 || f>r)
        printf("Queue Underflow.\n");
    else
    {
        printf("Queue:\n");
        for(i=f;i<=r;i++)
        {
            printf("%d\n",queue[i]);
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
        printf("Press 1.Push\nPress 2.Pop\nPress 3.Display\nPress 4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid Choice!!\n");
        }
    }
    return 0;
}


