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

struct node*deleteFromfirst(struct node*head)
{
    struct node*ptr=head;
    head=head->next;
    free(ptr);
    return head;
};

struct node*deleteFromindex(struct node*head,int index)
{
    struct node*p=head;
    struct node*q=head->next;
    for(int i=0; i<index-1; i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
};

struct node*deleteFromend(struct node*head)
{
    struct node*p=head;
    struct node*q=head->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
};

struct node*deleteFromvalue(struct node*head,int value)
{
    struct node*p=head;
    struct node*q=head->next;
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
    return head;
};

int main()
{
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    head->data=7;
    head->next=second;

    second->data=11;
    second->next=third;

    third->data=66;
    third->next=fourth;

    fourth->data=99;
    fourth->next=NULL;

    printf("Linked List before deletion:\n");
    traversal(head);

    printf("\nLinked List after deletion:\n");
    head=deleteFromfirst(head);
    head=deleteFromindex(head,1);
    head=deleteFromend(head);
    head=deleteFromvalue(head,11);
    traversal(head);
    return 0;
}
