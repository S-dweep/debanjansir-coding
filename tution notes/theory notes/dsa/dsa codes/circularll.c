#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};

struct node*create()
{
    int data;
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&data);
    ptr->data=data;
    ptr->next=NULL;
    return ptr;
};

void insertFirst(struct node**head)
{
    struct node*temp=create();
    if(*head==NULL)
    {
        *head=temp;
        temp->next=*head;
    }
    else
    {
        struct node*p=*head;
        while(p->next!=*head)
        {
            p=p->next;
        }
        p->next=temp;
        temp->next=*head;
        *head=temp;
    }
    return temp;
}

void insertIndex(struct node**head)
{
    struct node*temp=create();
    if(*head==NULL)
    {
        *head=temp;
        temp->next=*head;
    }
    else
    {
        int index,i=0;
        printf("Enter index: ");
        scanf("%d",&index);
        if(index<0)
        {
            printf("Position not found.\n");
        }
        else
        {
            struct node*p=*head;
            while(i!=index-1)
            {
                p=p->next;
                i++;
            }
            temp->next=p->next;
            p->next=temp;
        }
    }
    return temp;
}

void insertEnd(struct node**head)
{
    struct node*temp=create();
    if(*head==NULL)
    {
        *head=temp;
        temp->next=*head;
    }
    else
    {
        struct node*p=*head;
        while(p->next!=*head)
        {
            p=p->next;
        }
        p->next=temp;
        temp->next=*head;
    }
    return temp;
}

void deleteFirst(struct node**head)
{
    struct node*p;
    struct node*temp;
    if(*head==NULL)
    {
        printf("Deletion is not possible.\n");
    }
    else if((*head)->next==*head)
    {
        p=*head;
        *head=NULL;
        free(p);
    }
    else
    {
        p=*head;
        while(p->next!=*head)
        {
            p=p->next;
        }
        p->next=(*head)->next;
        temp=*head;
        *head=(*head)->next;
        free(temp);
    }
    return head;
}

void deleteIndex(struct node**head)
{
    struct node*p;
    struct node*temp;
    if(*head==NULL)
    {
        printf("Deletion is not possible.\n");
    }
    else if((*head)->next==*head)
    {
        p=*head;
        *head=NULL;
        free(p);
    }
    else
    {
        int index,i;
        printf("Enter index: ");
        scanf("%d",&index);
        if(index<0)
        {
            printf("Position not found.\n");
        }
        else
        {
            p=*head;
            temp=(*head)->next;
            for(i=0; i<index-1; i++)
            {
                p=p->next;
                temp=temp->next;
            }
            p->next=temp->next;
            free(temp);
        }
    }
    return head;
}

void deleteEnd(struct node**head)
{
    struct node*p;
    struct node*temp;
    if(*head==NULL)
    {
        printf("Deletion is not possible.\n");
    }
    else if((*head)->next==*head)
    {
        p=*head;
        *head=NULL;
        free(p);
    }
    else
    {
        p=*head;
        temp=(*head)->next;
        while(temp->next!=*head)
        {
            p=p->next;
            temp=temp->next;
        }
        p->next=temp->next;
        free(temp);
    }
    return head;
}

void display(struct node**head)
{
    struct node*temp=*head;
    if(*head==NULL)
    {
        printf("Circular Linked List is empty.\n");
    }
    else
    {
        printf("Circular Linked List:\n");
        while(temp->next!=*head)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("%d\t",temp->data);
        printf("\n");
    }
}

int main()
{
    struct node*head=NULL;
    int ch;
    while(1)
    {
        printf("---------------------------------\n");
        printf("---------------------------------\n");
        printf("Press 1 to insert at first.\n");
        printf("Press 2 to insert at index.\n");
        printf("Press 3 to insert at end.\n");
        printf("Press 4 to delete from first.\n");
        printf("Press 5 to delete from index.\n");
        printf("Press 6 to delete from end.\n");
        printf("Press 7 to delete from value.\n");
        printf("Press 8 to display.\n");
        printf("Press 9 to exit.\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            insertFirst(&head);
            break;
        case 2:
            insertIndex(&head);
            break;
        case 3:
            insertEnd(&head);
            break;
        case 4:
            deleteFirst(&head);
            break;
        case 5:
            deleteIndex(&head);
            break;
        case 6:
            deleteEnd(&head);
            break;
        case 8:
            display(&head);
            break;
        case 9:
            exit(0);
        default:
            printf("Invalid choice.\n");
        }
    }
}
