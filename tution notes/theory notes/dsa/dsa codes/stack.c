#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int top=-1,stack[MAX];

void push()
{
    int val;
    if(top==MAX-1)
        printf("Stack Overflow.\n");
    else
    {
        printf("Enter element to push: ");
        scanf("%d",&val);
        top++;
        stack[top]=val;
    }
}

void pop()
{
    if(top==-1)
        printf("Stack Underflow.\n");
    else
    {
        printf("Deleted element: %d\n",stack[top]);
        top--;
    }
}

void peek()
{
    if(top==-1)
        printf("Stack Underflow.\n");
    else
    {
        printf("Stack top: %d\n",stack[top]);
    }
}

void display()
{
    int i;
    if(top==-1)
        printf("Stack is empty.\n");
    else
    {
        printf("Stack:\n");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}

void main()
{
    int ch;
    while(1)
    {
        printf("**********************\n");
        printf("***Stack Operations***\n");
        printf("Press 1.Push\nPress 2.Pop\nPress 3.Peek\nPress 4.Display\nPress 5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
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
