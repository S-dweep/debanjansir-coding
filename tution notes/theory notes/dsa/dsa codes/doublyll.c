#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next,*prev;
};

struct node*create()
{
    int data;
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d",&data);
    ptr->data=data;
    ptr->next=NULL;
    ptr->prev=NULL;
    return ptr;
}

void display(struct node**head)
{
    struct node*temp=*head;
    if(*head==NULL)
    {
        printf("Doubly Linked List is empty.\n");
    }
    else
    {
        printf("Doubly Linked List:\n");
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}

void insertFirst(struct node**head)
{
    struct node*temp=create();
    if(*head==NULL)
    {
        *head=temp;
    }
    else
    {
        temp->next=*head;
        (*head)->prev=temp;
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
    }
    else
    {
        int index,i=0;
        printf("Enter index: ");
        scanf("%d",&index);
        struct node*p=*head;
        while(i!=index-1)
        {
            p=p->next;
            i++;
        }
        temp->next=p->next;
        temp->prev=p;
        p->next=temp;
    }
    return temp;
}

void insertEnd(struct node**head)
{
    struct node*temp=create();
    if(*head==NULL)
    {
        *head=temp;
    }
    else
    {
        struct node*p=*head;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        temp->next=NULL;
        temp->prev=p;
        p->next=temp;
    }
    return temp;
}

void deleteFirst(struct node**head)
{
    if(*head==NULL)
    {
        printf("Deletion is not possible.\n");
    }
    else
    {
        struct node*temp=*head;
        *head=(*head)->next;
        (*head)->prev=NULL;
        free(temp);
    }
    return head;
}

void deleteIndex(struct node**head)
{
    if(*head==NULL)
    {
        printf("Deletion is not possible.\n");
    }
    else
    {
        int index,i;
        printf("Enter index: ");
        scanf("%d",&index);
        struct node*p=*head;
        struct node*q=(*head)->next;
        while(i!=index-1)
        {
            p=p->next;
            q=q->next;
            i++;
        }
        p->next=q->next;
        q->next->prev=p;
        free(q);
    }
    return head;
}

void deleteEnd(struct node**head)
{
    if(*head==NULL)
    {
        printf("Deletion is not possible.\n");
    }
    else
    {
        struct node*p=*head;
        struct node*q=(*head)->next;
        while(q->next!=NULL)
        {
            p=p->next;
            q=q->next;
        }
        p->next=q->next;
        free(q);
    }
    return head;
}

void deleteFromvalue(struct node**head)
{
    if(*head==NULL)
    {
        printf("Deletion is not possible.\n");
    }
    else
    {
        int value;
        printf("Enter value: ");
        scanf("%d",&value);
        if((*head)->data==value)
        {
            struct node*temp=*head;
            *head=(*head)->next;
            (*head)->prev=NULL;
            free(temp);
        }
        else
        {
            struct node*p=*head;
            struct node*q=(*head)->next;
            while(q->data!=value && q->next!=NULL)
            {
                p=p->next;
                q=q->next;
            }
            if(q->data==value)
            {
                p->next=q->next;
                free(q);
            }
            else
            {
                printf("Value not present.\n");
            }
        }
    }
    return head;
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
        case 7:
            deleteFromvalue(&head);
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
