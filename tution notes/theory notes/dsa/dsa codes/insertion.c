#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};

void traversal(struct node*ptr)
{
    while(ptr!=NULL)
    {
        printf("%d\t",ptr->data);
        ptr=ptr->next;
    }
}

struct node*insertAtfirst(struct node*head,int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
};

struct node*insertAtindex(struct node*head,int data,int index)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->next=p->next;
    p->next=ptr;
    ptr->data=data;
    return head;
};

struct node*insertAtend(struct node*head,int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    ptr->data=data;
    return head;
};

struct node*insertAfternode(struct node*head,struct node*prev,int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=prev->next;
    prev->next=ptr;
    ptr->data=data;
    return head;
};

int main()
{
    struct node*head=(struct node*)malloc(sizeof(struct node));
    struct node*second=(struct node*)malloc(sizeof(struct node));

    head->data=7;
    head->next=second;

    second->data=24;
    second->next=NULL;

    head=insertAtfirst(head,56);
    head=insertAtindex(head,77,2);
    head=insertAtend(head,43);
    head=insertAfternode(head,second,90);
    traversal(head);
    return 0;
}
